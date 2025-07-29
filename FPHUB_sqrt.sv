module FPHUB_sqrt #(
    parameter int   M = 23,
    parameter int   E = 8,
    parameter int   N = 31, //TODO 31 ò 32?
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

    logic [1:0]   S   [25];
    logic [28:0]  F1;  //[N];
    logic [28:0]  F_1; //[N];
    logic [28:0]  W   [N];
    logic [28:0]  W2  [N];
    logic [28:0] WC    [N];

    logic x_sign;

    logic [7:0] x_exponent, scaled_exponent, res_exponent;
    assign x_exponent = x[30:23];
    assign scaled_exponent = x_exponent[0] ? x_exponent - 129 : x_exponent - 128 ; 

    logic [22:0] x_mantissa;
    assign x_mantissa = x[22:0];

    logic[24:0] intermidiate, x_scaled;
    assign intermidiate = {1'b1, x_mantissa, 1'b1};
    assign x_scaled = x_exponent[0] ? intermidiate >> 1 : intermidiate >> 2;

    logic [28:0] x_HUB;
    assign x_HUB = x[23] ? {4'b0001, x[22:0], 2'b10} : {5'b00001, x[22:0], 1'b1}; // IEEE MSB, mantissa, HUB ILSB


   // logic [28:0] x_HUB;
    //assign x_HUB = {3'b000, x_scaled, 1'b0}; // IEEE MSB, mantissa, HUB ILSB

    int j;

    logic [3:0] W_MSB;
    
    //assign W2[j] = W[j] << 1;
    
    assign W_MSB = W2[j][28:25]; //TODO: comprobar que esté bien

    logic [N*2+2:0] q;
    logic [24:0] posiv, neg;
    logic [31:0] root;
    logic [3:0] y_test [N];
    logic chivato;

    logic[3:0] select_test;
    assign select_test = W2[j][28:25] + WC[j][28:25];
    logic [2:0] f1_test;   
    logic negative;
    

    always_ff @(posedge clk or negedge rst_l) begin

        if(!rst_l) begin
            j <= '0;
            res <= '0;
            finish <= 1'b0;
            computing <= 1'b0;
            res_exponent <= '0;
            chivato <= 1'b0;
            negative <= 1'b0;
        
        end

        else begin
            if (finish) begin
                finish <= 1'b0;
                res <= '0;
            end
            else if (negative) begin
                negative <= 1'b0;
                computing <= 1'b0;
                res <= 32'hFFFFFFFF; 
                finish <= 1'b1;
            end
             if (!negative && start && !computing) begin
                if (x[31]) begin
                    //res <= 32'hFFFFFFFF;
                    //finish <= 1'b1;
                    computing <= 1'b1;
                    negative <= 1'b1;
                end else begin
                    res_exponent <= scaled_exponent >> 1 | {x_exponent[7], 7'b0};
                    S[0]   <= 2'b00;
                    W[0]   <= x[23] ? {4'b0001, x[22:0], 2'b10} : {5'b00001, x[22:0], 1'b1}; // IEEE MSB, mantissa, HUB ILSB;
                    WC[0] <= '0;
                    //F1[0]  <= {4'b1111, 25'd0};
                    //F_1[0] <= {4'b1111, 25'd0};
                    F1  <= {5'b11011, 24'd0};
                    F_1 <= {5'b00011, 24'd0};
                    S[1] <= 2'b01; // TODO: siempre 1?
                    W[1]  <=  x[23] ? ({4'b0001, x[22:0], 2'b10} << 1) ^ {4'b1111, 25'd0} : ({5'b00001, x[22:0], 1'b1} << 1) ^ {4'b1111, 25'd0}; //(x_HUB << 1) ^ ({5'b01111, 24'd0}); // xor
                    WC[1] <=  x[23] ? (({4'b0001, x[22:0], 2'b10} << 1) & {4'b1111, 25'd0}) << 1 : (({5'b00001, x[22:0], 1'b1} << 1) & {4'b1111, 25'd0}) << 1;
                    //WC[1] <= ((x_HUB << 1) & ({4'b1111, 25'd0})) << 2; 
                    W2[0] <= x_HUB << 1;
                    //W2[1] <= ((x_HUB << 1) ^ ({4'b1111, 25'd0})) << 1;
                    W2[1] <=  x[23] ? (({4'b0001, x[22:0], 2'b10} << 1) ^ {4'b1111, 25'd0}) << 1 : (({5'b00001, x[22:0], 1'b1} << 1) ^ {4'b1111, 25'd0}) << 1;
                    y_test[0] = 4'b0000; 
                    y_test[1] = 4'b0000; 
                // q[N*2:N*2-4] = 5'b00001;
                    j <= 1;
                    computing <= 1'b1;
                end               
            end 
            else if (computing && j < 24) begin
                j <= j + 1;
                y_test[j+1] <= W[j][28:25] + WC[j][28:25]; 

                if((W[j][28:25] + WC[j][28:25]) == 4'b1111) begin //TODO Overflow? creo que no importa
                    //S[2*N -(2*j +3) +: 2] <= 2'b00;
                    S[j+1] <= 2'b00;
                    // 00 00 01   00    XX
                    // 61 59 57   55   53
                   // q[j+1] 
                    W[j+1] <= (W[j] << 1); // +0 
                   // W[j+1][28] <= 1'b0;
                    WC[j+1] <= (WC[j] << 1);
                    W2[j+1] <= (W[j] << 2); 

                    for (int k = 0; k <= j+1; k++) begin
                        F1[23+5 - k] <= F1[23+5 - k];
                        F_1[23+5 - k] <= F_1[23+5 - k];
                    end

                    // asegurar rango
                    F1[28-j-4 +: 3] <= 3'b111;
                    F_1[28-j-4 +: 3] <= 3'b111;

                    for (int k = 0; k <= (28-j-5); k++) begin
                        F1[k] <= 1'b0;
                        F_1[k] <= 1'b0;
                    end
                    
                end

                else if ((W[j][28:25] + WC[j][28:25]) < 4'b1000 ) begin
                    chivato <= 1'b1;
                    
                    //S[2*N -(2*j +3) +: 2] <= 2'b01;
                    S[j+1] <= 2'b01;

                    W[j+1] <= (W2[j]) ^ F1 ^ (WC[j] << 1); // TODO: revisar: W -> Compl2, F1 -> signed digit
                    //W[j+1][28] <= 1'b0;
                    WC[j+1] <= (((W2[j]) & F1) | (W[j] << 1 & (WC[j] << 1)) | (F1 & (WC[j] << 1))) << 1;

                    W2[j+1] <=  ((W2[j] ) ^ F1 ^ (WC[j] << 1))  << 1; 
                    //f1_test <= F1[j][28:26];

                    for (int k = 0; k <= j+1; k++) begin // cambiado j+1 por j+2
                      //  f1_test[2-k] <= F1[j][28 - k];
                        F1[28 - k] <= F1[28 - k];
                        F_1[28 - k] <= ~F1[28 - k]; //TODO: revisar
                    end

                    // asegurar rango
                    F1[28-j-4 +: 3] <= 3'b011;
                    F_1[28-j-4 +: 3] <= 3'b011;

                    for (int k = 0; k <= (28-j-5); k++) begin
                        F1[k] <= 1'b0;
                        F_1[k] <= 1'b0;
                    end

                end

                else begin
                    //S[2*N -(2*j +3) +: 2] <= 2'b11;
                    S[j+1] <= 2'b11;

                    W[j+1] <= (W2[j]) ^ F_1 ^ (WC[j] << 1); // TODO: revisar: W -> Compl2, F1 -> signed digit
                  //  W[j+1][28] <= 1'b0;
                    WC[j+1] <= (((W2[j]) & F_1) | (W[j] << 1 & (WC[j] << 1)) | (F_1 & (WC[j] << 1))) << 1;


                    W2[j+1] <=  ((W2[j]) ^ F_1 ^ (WC[j] << 1)) << 1;

                    for (int k = 0; k <= j+1; k++) begin
                        F1[23+5 - k] <= ~F_1[23+5 - k];
                        F_1[23+5 - k] <= F_1[23+5 - k];
                    end

                    // asegurar rango
                    F1[28-j-4 +: 3] <= 3'b011;
                    F_1[28-j-4 +: 3] <= 3'b011;

                    for (int k = 0; k <= (28-j-5); k++) begin
                        F1[k] <= 1'b0;
                        F_1[k] <= 1'b0;
                    end
                end

                //F1[j+1][28] <= 1'b0; // test: forzar el bit MSB a 0
                //F_1[j+1][28] <= 1'b0; // test: forzar el bit MSB a 0


               // WC[j+1][28:27] <= 2'b00; // test, dos bits MSB de WC siempre 0
            end else if (computing && !negative)begin // Terminación
               
               /*
                q = {2'b00, S};

                 // Obtain the positions in which quotient q has a 1 or a -1
                for (int i = 0; i <= N+1; i++) begin
                    if (q[2*i+1 -: 2] == 2'b11) begin
                        neg[i] = 1; 
                    end
                    else if (q[2*i+1 -: 2] == 2'b01) begin
                        posiv[i] = 1;
                    end

                end
                */

                finish <= 1'b1;
                computing <= 1'b0;
                //root = posiv - neg;
                res <= {1'b0, res_exponent, res_mantissa};
                //res <= {1'b0, res_exponent, root[T:E+1]};
            end
            else if (!negative) begin
                finish <= 1'b0;
                res <= '0;
            end
        end

    end

    logic[31:0] quotient, restored_quotient;
    logic [28:0] normalized;
    int leading_zeros;
    logic [22:0] res_mantissa;
    logic [28:0] f1_fly;
    logic [28:0] SN2;

    always_comb begin

        posiv = '0;
        neg = '0;

        if (computing && j == 24) begin

             //q = {2'b00, S};

                 // Obtain the positions in which quotient q has a 1 or a -1
                 /*
                for (int i = 0; i <= N+1; i++) begin
                    if (S[2*i+1 -: 2] == 2'b11) begin
                        neg[i] = 1; 
                    end
                    else if (S[2*i+1 -: 2] == 2'b01) begin
                        posiv[i] = 1;
                    end

                end
                */

                /*
                for (int i = 0; i < 24; i++) begin
                    if (S[i] == 2'b11) begin
                        neg[23-i] = 1; 
                    end
                    else if (S[i] == 2'b01) begin
                        posiv[23-i] = 1;
                    end

                end


            // If final remainder is negative
            if (W[j][28]) begin
                quotient = (posiv - neg) -1'b1;
            end else begin
                quotient = posiv - neg;
            end
            
            // Obtain the final quotient by multiplying by 2 
            restored_quotient = quotient << 1;     

            // Count leading zeros
            leading_zeros = 0;    
            for (int i = T; i >= 0; i--) begin
                if (restored_quotient[i] == 1) break;
                leading_zeros = leading_zeros + 1;
            end
                    
            // Normalize the fixed-point value
            normalized = restored_quotient << leading_zeros;
                    
            // Extract mantissa, drop the implicit 1
            res_mantissa = normalized[T-1:E]; 
            */
            f1_fly = (~F1 >> 1);

             if (W[j][28]) begin
                leading_zeros = 0;

                for (int i = 28; i >= 0; i--) begin
                    if (F_1[i] == 1) break;
                    leading_zeros = leading_zeros + 1;
                end

                normalized = F_1 << leading_zeros;
                res_mantissa = normalized[27:5]; // Mantissa without implicit 1

            end else begin
                
                SN2 = ~F1;
                leading_zeros  = 0;

                 for (int i = 28; i >= 0; i--) begin
                    if (f1_fly[i] == 1) break;
                    leading_zeros = leading_zeros + 1;
                end

                normalized = f1_fly << leading_zeros;
                res_mantissa = normalized[27:5]; // Mantissa without implicit 1
                
            end

        end
    end

endmodule

/*
module FPHUB_sqrt #(
    parameter int   M = 23,
    parameter int   E = 8,
    parameter int   N = 31, //TODO 31 ò 32?
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

    logic [62:0]   S ;
    logic [28:0]  F1  [N];
    logic [28:0]  F_1 [N];
    logic [28:0]  W   [N];
    logic [28:0]  W2  [N];
    logic [28:0] WC    [N];

    logic x_sign;

    logic [7:0] x_exponent, res_exponent;
    assign x_exponent = x[30:23];

    logic [22:0] x_mantissa;
    assign x_mantissa = x[22:0];

    logic [28:0] x_HUB;
    assign x_HUB = {4'b0, 1'b1, x_mantissa, 1'b1}; // IEEE MSB, mantissa, HUB ILSB

    int j;

    logic [3:0] W_MSB;
    
    //assign W2[j] = W[j] << 1;
    
    assign W_MSB = W2[j][28:25]; //TODO: comprobar que esté bien

    logic [N*2+2:0] q;
    logic [31:0] posiv, neg;
    logic [31:0] root;
    

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
                S[62:61]   <= 2'b00;
                W[0]   <= x_HUB;
                F1[0]  = {5'b01111, 24'd0};
                F_1[0] = {5'b01111, 24'd0};
                F1[1]  = {6'b011011, 23'd0};
                F_1[1] = {6'b000011, 23'd0};
                S[60:59] <= 2'b01; // TODO: siempre 1?
                W[1] <=   (x_HUB << 1) + ({5'b01111, 24'd0}); //TODO cambiar F en la suma del algoritmo general
                W2[0] <= x_HUB << 1;
                W2[1] <= ((x_HUB << 1) + ({5'b01111, 24'd0})) << 1;
               // q[N*2:N*2-4] = 5'b00001;
                j <= 1;
                computing <= 1'b1;
            end 
            else if (computing && j < N) begin
                j <= j + 1;
                

                if(W_MSB == 4'b1111) begin
                    S[2*N -(2*j +3) +: 2] <= 2'b00;
                    // 00 00 01   00    XX
                    // 61 59 57   55   53
                   // q[j+1] 
                    W[j+1] <= (W[j] << 1) ; // +0 
                    W2[j+1] <= (W[j] << 2);
                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] = F1[j][M+2 - k];
                        F_1[j+1][M+2 - k] = F_1[j][M+2 - k];
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] = 3'b111;
                    F_1[j+1][M-j-2 -: 3] = 3'b111;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] = 1'b0;
                        F_1[j+1][k] = 1'b0;
                    end

                 
                    
                end

                else if (W_MSB < 4'b1000 ) begin
                    S[2*N -(2*j +3) +: 2] <= 2'b01;
                    W[j+1] <= (W[j] << 1) + F1[j]; // TODO: revisar: W -> Compl2, F1 -> signed digit
                    W2[j+1] <= ((W[j] << 1) + F1[j]) << 1;

                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] = F1[j][M+2 - k];
                        F_1[j+1][M+2 - k] = ~F1[j][M+2 - k]; //TODO: revisar
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] = 3'b011;
                    F_1[j+1][M-j-2 -: 3] = 3'b011;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] = 1'b0;
                        F_1[j+1][k] = 1'b0;
                    end

                end

                else begin
                    S[2*N -(2*j +3) +: 2] <= 2'b11;
                    W[j +1] <= (W[j] << 1) + F_1[j]; // TODO: revisar: W -> Compl2, F1 -> signed digit
                    W2[j +1] <= ((W[j] << 1) + F_1[j]) << 1;

                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] = ~F_1[j][M+2 - k];
                        F_1[j+1][M+2 - k] = F_1[j][M+2 - k];
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] = 3'b011;
                    F_1[j+1][M-j-2 -: 3] = 3'b011;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] = 1'b0;
                        F_1[j+1][k] = 1'b0;
                    end
                end
            end else if (computing)begin // Terminación
                q = {2'b00, S};

                 // Obtain the positions in which quotient q has a 1 or a -1
                for (int i = 0; i <= N+1; i++) begin
                    if (q[2*i+1 -: 2] == 2'b11) begin
                        neg[i] = 1; 
                    end
                    else if (q[2*i+1 -: 2] == 2'b01) begin
                        posiv[i] = 1;
                    end

                end
                finish <= 1'b1;
                computing <= 1'b0;
                root = posiv - neg;
                res <= {1'b0, res_exponent, root[T:E+1]};
            end
            else begin
                finish <= 1'b0;
                res <= '0;
            end
        end

    end

endmodule
*/

/*`timescale 1ns / 1ps
module FPHUB_sqrt #(
    parameter int   M = 23,
    parameter int   E = 8,
    parameter int   N = 31, //TODO 31 ò 32?
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

    logic [62:0]   S ;
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
    assign x_HUB = {1'b1, x_mantissa, 1'b1}; // IEEE MSB, mantissa, HUB ILSB

    int j;

    logic [3:0] W_MSB;
    
    assign W2 = W[j] << 1;
    
    assign W_MSB = W2[24:21]; //TODO: comprobar que esté bien

    logic [N*2+2:0] q;
    logic [31:0] posiv, neg;
    logic [31:0] root;

    logic [1:0] state;
    
    always_comb begin 
        if (start) begin
            F1[0]  = {4'b1111, 22'd0};
                F_1[0] = {4'b1111, 22'd0};
                F1[1]  = {5'b11011, 21'd0};
                F_1[1] = {5'b00011, 21'd0};
        end
    end

    always_ff @(posedge clk or negedge rst_l) begin

        if(!rst_l) begin
            j <= '0;
            res <= '0;
            finish <= 1'b0;
            computing <= 1'b0;
            res_exponent <= '0; 
            state <= '0;
        
        end

        else begin
            if (start) begin
                res_exponent <= x_exponent >> 1;         
                S[62:61]   <= 2'b00;
                W[0]   <= x;
  
                S[60:59] <= 2'b01; // TODO: siempre 1?
                W[1] <=   (x_HUB << 1) + ({4'b1111, 21'd0}); //TODO cambiar F en la suma del algoritmo general
               // q[N*2:N*2-4] = 5'b00001;
                j <= 1;
                computing <= 1'b1;

                if (computing) begin
                    state <= 2'b11;
                end else begin
                    state <= 2'b01;
                end
            end 
            else if (computing && j < N) begin
                j <= j + 1;

                if(W_MSB == 4'b1111) begin
                    S[2*N -(2*j +3) +: 2] <= 2'b00;
                    // 00 00 01   00    XX
                    // 61 59 57   55   53
                   // q[j+1] 
                    W[j+1] <= (W[j] << 1) ; // +0 
                    
                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] = F1[j][M+2 - k];
                        F_1[j+1][M+2 - k] = F_1[j][M+2 - k];
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] = 3'b111;
                    F_1[j+1][M-j-2 -: 3] = 3'b111;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] = 1'b0;
                        F_1[j+1][k] = 1'b0;
                    end

   
                    
                end

                else if (W_MSB < 4'b1000 ) begin
                    S[2*N -(2*j +3) +: 2] <= 2'b01;
                    W[j+1] <= (W[j] << 1) + F1[j]; // TODO: revisar: W -> Compl2, F1 -> signed digit

                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] = F1[j][M+2 - k];
                        F_1[j+1][M+2 - k] = ~F1[j][M+2 - k]; //TODO: revisar
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] = 3'b011;
                    F_1[j+1][M-j-2 -: 3] = 3'b011;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] = 1'b0;
                        F_1[j+1][k] = 1'b0;
                    end

                end

                else begin
                    S[2*N -(2*j +3) +: 2] <= 2'b11;
                    W[j +1] <= (W[j] << 1) + F_1[j]; // TODO: revisar: W -> Compl2, F1 -> signed digit

                    for (int k = 0; k <= j+1; k++) begin
                        F1[j+1][M+2 - k] = ~F_1[j][M+2 - k];
                        F_1[j+1][M+2 - k] = F_1[j][M+2 - k];
                    end

                    // asegurar rango
                    F1[j+1][M-j-2 -: 3] = 3'b011;
                    F_1[j+1][M-j-2 -: 3] = 3'b011;

                    for (int k = 0; k <= (M-j-3); k++) begin
                        F1[j+1][k] = 1'b0;
                        F_1[j+1][k] = 1'b0;
                    end
                end
            end else if (computing) begin // Terminación
                q = {2'b00, S};

                 // Obtain the positions in which quotient q has a 1 or a -1
                for (int i = 0; i <= N+1; i++) begin
                    if (q[2*i+1 -: 2] == 2'b11) begin
                        neg[i] = 1; 
                    end
                    else if (q[2*i+1 -: 2] == 2'b01) begin
                        posiv[i] = 1;
                    end

                end
                finish <= 1'b1;
                computing <= 1'b0;
                root = posiv - neg;
                res <= {1'b0, res_exponent, root[T:E+1]};
            end else begin
                finish <= 1'b0;
                res <= '0;
            end
        end

    end

endmodule
*/
