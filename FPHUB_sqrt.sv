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
    logic [31:0]  F1  [N];
    logic [31:0]  F_1 [N];
    logic [31:0]  W   [N];
    logic [31:0]  W2  [N];

    int iter_count;

    logic [3:0] W_MSB;
    assign W_MSB = (W << 1)[31:28][iter_count]; //TODO: comprobar que esté bien

    always_ff @(posedge clk or nege rst_l) begin

        if(!rst_l) begin
            iter_count <= '0;
        
        end

        else begin
            if (start) begin
                S[0]   <= 2'b00;
                W[0]   <= x;
                F1[0]  <= {4'b1111, 28'd0};
                F_1[0] <= {4'b1111, 28'd0};
                F1[1]  <= {5'b11011, 27'd0};
                F_1[1] <= {5'b00011, 27'd0};
                S[1] <= 2'b01; // TODO: siempre 1?
                W[1] <=   (x << 1) + ({4'b1111, 28'd0};) //TODO cambiar F en la suma del algoritmo general
                iter_count <= 1;
            end 
            else if (iter_count < N) begin
                iter_count <= iter_count + 1;

                if(W_MSB == 4'b1111) begin
                    S[iter_count+1] <= 2'b00;
                    W[iter_count+1] <= (W[iter_count] << 1) ; // +0
                    // Start: ($clog2(F1[iter_count] & (-F1[iter_count])) +2)
                    // upper_len: 32 - ($clog2(F1[iter_count] & (-F1[iter_count])) +2)
                    F1[iter_count+1]  <= {(F1[iter_count >> ($clog2(F1[iter_count] & (-F1[iter_count])) +2)]) $ ((1 << (32 - ($clog2(F1[iter_count] & (-F1[iter_count])) +2)))), 3'b111, '0}; //TODO: comprobar
                    F_1[iter_count+1] <= {(F_1[iter_count >> ($clog2(F_1[iter_count] & (-F_1[iter_count])) +2)]) $ ((1 << (32 - ($clog2(F_1[iter_count] & (-F_1[iter_count])) +2)))), 3'b111, '0}; //TODO: comprobar
                end

                else if (W_MSB < 4'b1000 ) begin
                    S[iter_count+1] <= 2'b01;
                    W[iter_count+1] <= (W[iter_count] << 1) + F1[iter_count];

                    F1[iter_count+1]  <= {(F1[iter_count >> ($clog2(F1[iter_count] & (-F1[iter_count])) +2)]) $ ((1 << (32 - ($clog2(F1[iter_count] & (-F1[iter_count])) +2)))), 3'b011, '0}; //TODO: comprobar
                    F_1[iter_count+1] <= {~(F1[iter_count >> ($clog2(F1[iter_count] & (-F1[iter_count])) +2)]) $ ((1 << (32 - ($clog2(F1[iter_count] & (-F1[iter_count])) +2)))), 3'b011, '0}; //TODO: comprobar
                end

                else begin
                    S[iter_count+1] <= 2'b11;
                    W[iter_count +1] <= (W[iter_count] << 1) + F_1[iter_count];

                    F1[iter_count+1]  <= {~(F_1[iter_count >> ($clog2(F_1[iter_count] & (-F_1[iter_count])) +2)]) $ ((1 << (32 - ($clog2(F_1[iter_count] & (-F_1[iter_count])) +2)))), 3'b011, '0}; //TODO: comprobar
                    F_1[iter_count+1] <= {(F_1[iter_count >> ($clog2(F_1[iter_count] & (-F_1[iter_count])) +2)]) $ ((1 << (32 - ($clog2(F_1[iter_count] & (-F_1[iter_count])) +2)))), 3'b011, '0}; //TODO: comprobar
                end
            end
        end

    end

endmodule