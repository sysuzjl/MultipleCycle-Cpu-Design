`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:57:02 05/12/2016 
// Design Name: 
// Module Name:    sc_aluout 
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
module sc_aluout(clk, DateIn, Dateout
    );
    input[31:0] DateIn;
	 input clk;
	 reg [31:0]Datereg;
	 output reg [31:0] Dateout;
	 initial begin
        Dateout = 0;
    end
    always @(clk) begin
	     Dateout = Datereg;
		  Datereg = DateIn;
	 end 
endmodule
