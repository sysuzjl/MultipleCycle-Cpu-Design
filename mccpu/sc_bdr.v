`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:46 05/12/2016 
// Design Name: 
// Module Name:    sc_bdr 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sc_bdr(clk, DateIn, Dateout
    );
    input[31:0] DateIn;
	 output reg [31:0] Dateout;
	 input clk;
	 initial begin
        Dateout = 0;
    end
    always @(posedge clk) begin
	     Dateout = DateIn;
	 end 
endmodule
