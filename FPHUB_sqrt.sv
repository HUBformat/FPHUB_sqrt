module FPHUB_sqrt #(
    parameter int   M = 23,
    parameter int   E = 8,
    parameter int   N = M+2, // Number of iterations
    parameter int   FM = M+5, // 000 + 1 IEEE + mantissa + 1 ILSB + extra 0
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

    logic [FM:0]  F1;  //[N];
    logic [FM:0]  F_1; //[N];
    logic [FM:0]  W   [N];
    logic [FM:0]  W2  [N];
    logic [FM:0] WC    [N];


    logic [E-1:0] x_exponent, scaled_exponent, res_exponent;
    assign x_exponent = x[T-1:T-E];
    assign scaled_exponent = x_exponent[0] ? x_exponent - (EXP_BIAS+1) : x_exponent - EXP_BIAS ; 

    logic [FM:0] x_HUB;
    // 000 + 1 IEEE + mantissa + 1 ILSB + extra 0
    assign x_HUB = x[T-E] ? {4'b0001, x[M-1:0], 2'b10} : {5'b00001, x[M-1:0], 1'b1}; // IEEE MSB, mantissa, HUB ILSB 

    int j;
    logic negative;
    logic inf;
    logic zero;
    
    always_ff @(posedge clk or negedge rst_l) begin

        if(!rst_l) begin
            j <= '0;
            res <= '0;
            finish <= 1'b0;
            computing <= 1'b0;
            res_exponent <= '0;
            negative <= 1'b0;
            inf <= 1'b0;
            zero <= 1'b0;
        
        end

        else begin
            if (finish) begin
                finish <= 1'b0;
                res <= '0;
            end
            else if (negative) begin
                negative <= 1'b0;
                computing <= 1'b0;
                res <= {T+1{1'b1}};
                finish <= 1'b1;
            end else if (inf) begin
                inf <= 1'b0;
                computing <= 1'b0;
                res <= {1'b0, {T{1'b1}}};
                finish <= 1'b1;
            end else if (zero) begin
                zero <= 1'b0;
                computing <= 1'b0;
                res <= '0;
                finish <= 1'b1;
            end
             if (!negative && !inf && !zero && start && !computing) begin
                if (x[T]) begin
                    computing <= 1'b1;
                    negative <= 1'b1;
                end else if (&x[T-1:0]) begin 
                    computing <= 1'b1;
                    inf <= 1'b1;
                end else if (~|x[T:0]) begin
                    computing <= 1'b1;
                    zero <= 1'b1;
                end else begin
                    res_exponent <= scaled_exponent >> 1 | {x_exponent[E-1], {(E-1){1'b0}}}; 
                    W[0]   <= x[T-E] ? {4'b0001, x[M-1:0], 2'b10} : {5'b00001, x[M-1:0], 1'b1}; // IEEE MSB, mantissa, HUB ILSB; 
                    WC[0] <= '0;

                    F1  <= {5'b11011, {M+1{1'b0}}}; 
                    F_1 <= {5'b00011, {M+1{1'b0}}};
                    W[1]  <=  x[T-E] ? ({4'b0001, x[M-1:0], 2'b10} << 1) ^ {4'b1111, {M+2{1'b0}}} : ({5'b00001, x[M-1:0], 1'b1} << 1) ^ {4'b1111, {M+2{1'b0}}};
                    WC[1] <=  x[T-E] ? (({4'b0001, x[M-1:0], 2'b10} << 1) & {4'b1111, {M+2{1'b0}}}) << 1 : (({5'b00001, x[M-1:0], 1'b1} << 1) & {4'b1111, {M+2{1'b0}}}) << 1;

                    W2[0] <= x_HUB << 1;

                    W2[1] <=  x[T-E] ? (({4'b0001, x[M-1:0], 2'b10} << 1) ^ {4'b1111, {M+2{1'b0}}}) << 1 : (({5'b00001, x[M-1:0], 1'b1} << 1) ^ {4'b1111, {M+2{1'b0}}}) << 1;

                    j <= 1;
                    computing <= 1'b1;
                end               
            end 
            else if (computing && j < N-1) begin
                j <= j + 1;

                if((W[j][FM:FM-3] + WC[j][FM:FM-3]) == 4'b1111) begin 

                    W[j+1] <= (W[j] << 1); // +0 

                    WC[j+1] <= (WC[j] << 1);
                    W2[j+1] <= (W[j] << 2); 

                    for (int k = 0; k <= j+1; k++) begin
                        F1[FM-k] <= F1[FM-k];
                        F_1[FM-k] <= F_1[FM-k];
                    end

                    F1[FM-j-4 +: 3] <= 3'b111;
                    F_1[FM-j-4 +: 3] <= 3'b111;

                    for (int k = 0; k <= (FM-j-5); k++) begin
                        F1[k] <= 1'b0;
                        F_1[k] <= 1'b0;
                    end
                    
                end

                else if ((W[j][FM:FM-3] + WC[j][FM:FM-3]) < 4'b1000 ) begin

                    W[j+1] <= (W2[j]) ^ F1 ^ (WC[j] << 1); 
                    WC[j+1] <= (((W2[j]) & F1) | (W[j] << 1 & (WC[j] << 1)) | (F1 & (WC[j] << 1))) << 1;

                    W2[j+1] <=  ((W2[j] ) ^ F1 ^ (WC[j] << 1))  << 1; 

                    for (int k = 0; k <= j+1; k++) begin 
                        F1[FM-k] <= F1[FM-k];
                        F_1[FM-k] <= ~F1[FM-k]; 
                    end

                    F1[FM-j-4 +: 3] <= 3'b011;
                    F_1[FM-j-4 +: 3] <= 3'b011;

                    for (int k = 0; k <= (FM-j-5); k++) begin
                        F1[k] <= 1'b0;
                        F_1[k] <= 1'b0;
                    end

                end

                else begin

                    W[j+1] <= (W2[j]) ^ F_1 ^ (WC[j] << 1); 
                    WC[j+1] <= (((W2[j]) & F_1) | (W[j] << 1 & (WC[j] << 1)) | (F_1 & (WC[j] << 1))) << 1;


                    W2[j+1] <=  ((W2[j]) ^ F_1 ^ (WC[j] << 1)) << 1;

                    for (int k = 0; k <= j+1; k++) begin
                        F1[FM-k] <= ~F_1[FM-k];
                        F_1[FM-k] <= F_1[FM-k];
                    end

                    F1[FM-j-4 +: 3] <= 3'b011;
                    F_1[FM-j-4 +: 3] <= 3'b011;

                    for (int k = 0; k <= (FM-j-5); k++) begin
                        F1[k] <= 1'b0;
                        F_1[k] <= 1'b0;
                    end
                end

            end else if (computing && !negative && !inf && !zero)begin // Terminación

                finish <= 1'b1;
                computing <= 1'b0;

                res <= {1'b0, res_exponent, res_mantissa};

            end
            else if (!negative && !inf && !zero) begin
                finish <= 1'b0;
                res <= '0;
            end
        end

    end

    logic [FM:0] normalized;
    int leading_zeros;
    logic [M-1:0] res_mantissa;
    logic [FM:0] f1_fly;

    always_comb begin

        if (computing && j == N-1) begin

            f1_fly = (~F1 >> 1);

             if (W[j][FM]) begin
                leading_zeros = 0;

                for (int i = FM; i >= 0; i--) begin
                    if (F_1[i] == 1) break;
                    leading_zeros = leading_zeros + 1;
                end

                normalized = F_1 << leading_zeros;
                res_mantissa = normalized[FM-1:FM-M]; // Mantissa without implicit 1

            end else begin
                
                leading_zeros  = 0;

                 for (int i = FM; i >= 0; i--) begin
                    if (f1_fly[i] == 1) break;
                    leading_zeros = leading_zeros + 1;
                end

                normalized = f1_fly << leading_zeros;
                res_mantissa = normalized[FM-1:FM-M]; // Mantissa without implicit 1
                
            end

        end
    end

endmodule

