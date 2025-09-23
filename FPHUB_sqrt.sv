/*Title: Main module FPHUB Square Root

  Floating-point Square Root by Digit Recurrence for HUB format.
*/

/* Module: FPHUB_divider
 
  Summary:
      Implements a floating-point, radix-2, square root unit by digit recurrence for HUB format

  Parameters:
      M - Width of the mantissa (23 by default).
      E - Width of the exponent (8 by default).
      N - Number of iterations of the algorithm.
      FM - Width of the extended mantissa.
      T - Total width of the floating-point number, without the sign.
      EXP_BIAS - Exponent bias for the given exponent width.
      EXP_BIAS_LOW - Exponent bias minus one.
 
  Ports:
      clk - System clock.
      rst_l - reset signal (active low).
      start - Initiates the operation.
      x - Operand in HUB floating-point format.
      res - Result of the floating-point division.
      finish - Indicates the operation is complete.
      computing - Indicates the operation is in progress.
      is_special_case - Flag indicating if a special case was detected.
 */
module FPHUB_sqrt #(
    parameter int   M = 23,
    parameter int   E = 8,
    localparam int   N = M+2,
    localparam int   FM = M+5,
    localparam int  T = M+E,
    localparam int  EXP_BIAS = 1 << (E - 1),
    localparam int  EXP_BIAS_LOW = EXP_BIAS -1
)(
    input  logic            clk,        
    input  logic            rst_l,     
    input  logic            start,    
    input  logic [T:0]      x,                  
    output logic [T:0]      res,      
    output logic            finish,       
    output logic            computing,
    output logic            is_special_case
);
    
    /* Section: Intermediate Signals declaration

    Creation and assignment of different intermediate signals to be used later during the algorithm.
    
    */

    /* Variable: W
        Signal containing the residual of the operation at each iteration.
    */
    logic [FM:0]  W;

    /* Variable: W2
        Signal containing 2*W at each iteration.
    */
    logic [FM:0]  W2;

    /* Variable: WC
        Signal containing the carry of the residual at each iteration.
    */
    logic [FM:0]  WC;
    
    /* Variable: F1, F_1
        Signals used to copmute the on-the-fly conversion of the result.
    */
    logic [FM:0]  F1, F_1;

    /* Variable: x_exponent
        Exponent of the input operand.
    */
    logic [E-1:0] x_exponent;
    assign x_exponent = x[T-1:T-E];

    /* Variable: scaled_exponent
        Scaled exponent of the input operand.
    */
    logic[E-1:0] scaled_exponent;
    assign scaled_exponent = x_exponent[0] ? x_exponent - (EXP_BIAS+1) : x_exponent - EXP_BIAS ; 

    /* Variable: res_exponent
        Exponent of the result.
    */
    logic[E-1:0] res_exponent;
    
    
    /* Variable: j
        Iteration counter.
    */
    int j;

    /* Variable: negative, inf, zero
        Flags to indicate if the input is a negative number, infinity or zero.
    */
    logic negative, inf, zero;
    assign is_special_case = negative | inf | zero;

    
   

    always_ff @(posedge clk or negedge rst_l) begin

         /* Section: Initialization

            Initialization of the signals to be used in the recurrence
        */

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

            /* Section: special cases handling

            Logic to handle special cases: negative numbers, infinity and zero.
            */
            
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

                /* Section: Initial step of the algorithm

                    Logic to perform the initial step of the digit recurrence algorithm.
                */
                end else begin
                    res_exponent <= scaled_exponent >> 1 | {x_exponent[E-1], {(E-1){1'b0}}}; 

                    F1  <= {5'b11011, {M+1{1'b0}}}; 
                    F_1 <= {5'b00011, {M+1{1'b0}}};

                    W  <=  x[T-E] ? ({4'b0001, x[M-1:0], 2'b10} << 1) ^ {4'b1111, {M+2{1'b0}}} : ({5'b00001, x[M-1:0], 1'b1} << 1) ^ {4'b1111, {M+2{1'b0}}};
                    W2 <=  x[T-E] ? (({4'b0001, x[M-1:0], 2'b10} << 1) ^ {4'b1111, {M+2{1'b0}}}) << 1 : (({5'b00001, x[M-1:0], 1'b1} << 1) ^ {4'b1111, {M+2{1'b0}}}) << 1;

                    WC <=  x[T-E] ? (({4'b0001, x[M-1:0], 2'b10} << 1) & {4'b1111, {M+2{1'b0}}}) << 1 : (({5'b00001, x[M-1:0], 1'b1} << 1) & {4'b1111, {M+2{1'b0}}}) << 1;

                    j <= 1;
                    computing <= 1'b1;
                end               
            end 

            /* Section: Recurrence step of the algorithm

                Logic to perform the main recurrence of the algorithm.
            */
            else if (computing && j < N-1) begin 
                j <= j + 1;

                if((W[FM:FM-3] + WC[FM:FM-3]) == 4'b1111) begin  // If the 4 most significant bits of (W + WC) = -1

                    W <= (W << 1);
                    WC <= (WC << 1);
                    W2 <= (W << 2); 

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

                else if ((W[FM:FM-3] + WC[FM:FM-3]) < 4'b1000 ) begin // // If the 4 most significant bits of (W + WC) < -8

                    W <= (W2) ^ F1 ^ (WC << 1); 
                    WC <= (((W2) & F1) | (W << 1 & (WC << 1)) | (F1 & (WC << 1))) << 1;
                    W2 <=  ((W2 ) ^ F1 ^ (WC << 1))  << 1; 

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

                    W <= (W2) ^ F_1 ^ (WC << 1); 
                    WC <= (((W2) & F_1) | (W << 1 & (WC << 1)) | (F_1 & (WC << 1))) << 1;
                    W2 <=  ((W2) ^ F_1 ^ (WC << 1)) << 1;

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

            end else if (computing && !negative && !inf && !zero)begin  // Termination

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

    /* Section: On-the-fly conversion

        Logic to perform the on-the-fly conversion of the result.
    */

    /* Variable: normalized
        Normalized version of the result mantissa.
    */
    logic [FM:0] normalized;

    /* Variable: leading_zeros
        Number of leading zeros in the normalized mantissa.
    */
    int leading_zeros;

    /* Variable: res_mantissa
        Mantissa of the result.
    */
    logic [M-1:0] res_mantissa;

    /* Variable: f1_fly
        Complement of F1 for on-the-fly conversion.
    */
    logic [FM:0] f1_fly;

    always_comb begin

        if (computing && j == N-1) begin

            f1_fly = (~F1 >> 1);

             if (W[FM]) begin
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
                res_mantissa = normalized[FM-1:FM-M];
                
            end

        end
    end

endmodule

