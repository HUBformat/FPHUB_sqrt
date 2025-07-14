module FPHUB_sqrt #(
    parameter int   M = 23,
    parameter int   E = 8,
    parameter int   N = 31, 
    localparam int  T = M+E,
    localparam int  EXP_BIAS = 1 << (E - 1),
    localparam int  EXP_BIAS_LOW = EXP_BIAS -1,
    localparam int  special_case = 7,
    localparam int  sign_mantissa_bit = 1,
    localparam int  one_implicit_bit = 1,
    localparam int  ilsb_bit = 1,
    localparam int  extra_int_bit = 1,
    localparam int  extra_bit_x_gt_d = 1,
    localparam int  extra_bits_mantissa = sign_mantissa_bit + one_implicit_bit + ilsb_bit + extra_int_bit + extra_bit_x_gt_d
)(
    input  logic            clk,        
    input  logic            rst_l,     
    input  logic            start,    
    input  logic [T:0]      x,                  
    output logic [T:0]      res,      
    output logic            finish,       
    output logic            computing
);

    logic [1:0]   S   [N];
    logic [M+2:0]  F1  [N];
    logic [M+2:0]  F_1 [N];
    logic [24:0]  W   [N];
    logic [24:0]  W2;

    logic x_sign;

    logic [7:0] x_exponent, res_exponent;
    assign x_exponent = x[30:23];

    logic [22:0] x_mantissa;
    assign x_mantissa = x[22:0];

    logic [24:0] x_HUB;
    assign x_HUB = {1'b0, x_mantissa, 1'b1}; // IEEE MSB, mantissa, HUB ILSB

    int j;

    logic [3:0] W_MSB;
    
    assign W2 = W[j] << 1;
    
    assign W_MSB = W2[24:21]; //TODO: comprobar que esté bien
    

    always_ff @(posedge clk or negedge rst_l) begin

        if(!rst_l) begin
            j <= '0;
            res <= '0;
            finish <= 1'b0;
            computing <= 1'b0;
            res_exponent <= '0;
        
        end

        else begin
            if (start) begin
                res_exponent <= x_exponent >> 1;         
                S[0]   <= 2'b00;
                W[0]   <= x;
                F1[0]  <= {4'b1111, 23'd0};
                F_1[0] <= {4'b1111, 23'd0};
                F1[1]  <= {5'b11011, 22'd0};
                F_1[1] <= {5'b00011, 22'd0};
                S[1] <= 2'b01; // TODO: siempre 1?
                W[1] <=   (x_HUB << 1) + ({4'b1111, 21'd0}); //TODO cambiar F en la suma del algoritmo general
                j <= 1;
                computing <= 1'b1;
            end 
            else if (computing && j < N) begin
                j <= j + 1;

                if(W_MSB == 4'b1111) begin
                    S[j+1] <= 2'b00;
                    W[j+1] <= (W[j] << 1) ; // +0
                    
                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] <= F1[j][M+2 - k];
                        F_1[j+1][M+2 - k] <= F_1[j][M+2 - k];
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] <= 3'b111;
                    F_1[j+1][M-j-2 -: 3] <= 3'b111;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] <= 1'b0;
                        F_1[j+1][k] <= 1'b0;
                    end

                    /*
                    F1[j+1][M+2 -: (j+2)] <= F1[j][M+2 -: (j+2)];
                    F1[j+1][M-j-2 -: 3]   <= 3'b111;
                    F1[j+1][0 +: (M-j-3+1)] <= '0;
                    */

                    /*
                    F1[j+1][M+2:M+1-j] <= F1[j][M+2:M+1-j];
                    F1[j+1][M-j-2] <= 3'b111;
                    F1[j+1][M-j-3:0] <= '0;
                    */

                    /*
                    F1[j+1] <=  {3'b110, 3'b111, '0};
                    F_1[j+1] <= {3'b000, 3'b111, '0};
                    */
                    
                end

                else if (W_MSB < 4'b1000 ) begin
                    S[j+1] <= 2'b01;
                    W[j+1] <= (W[j] << 1) + F1[j];

                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] <= F1[j][M+2 - k];
                        F_1[j+1][M+2 - k] <= ~F1[j][M+2 - k]; //TODO: revisar
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] <= 3'b011;
                    F_1[j+1][M-j-2 -: 3] <= 3'b011;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] <= 1'b0;
                        F_1[j+1][k] <= 1'b0;
                    end

                end

                else begin
                    S[j+1] <= 2'b11;
                    W[j +1] <= (W[j] << 1) + F_1[j];

                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] <= ~F_1[j][M+2 - k];
                        F_1[j+1][M+2 - k] <= F_1[j][M+2 - k];
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] <= 3'b011;
                    F_1[j+1][M-j-2 -: 3] <= 3'b011;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] <= 1'b0;
                        F_1[j+1][k] <= 1'b0;
                    end
                end
            end
        end

    end

endmodule