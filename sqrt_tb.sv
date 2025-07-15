`timescale 1ns / 1ps
module sqrt_tb;

    logic clk = 0;
    logic rst_l = 0;
    logic start=0;
    
    logic[31:0] x;
    logic[31:0] res;
    
    logic finish;
    logic computing;
    
    always #1 clk = ~clk;
        
    FPHUB_sqrt raiz(
        .clk(clk),
        .rst_l(rst_l),
        .start(start),
        .x(x),
        .res(res),
        .finish(finish),
        .computing(computing)   
    );
    
    initial begin
    
    #5 
    rst_l = 1;
    
    #1
    start = 1;
    x = 32'h41100000;
    
    #2
    start=0;
 
    end
endmodule
