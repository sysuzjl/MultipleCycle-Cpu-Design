`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:33 05/12/2016 
// Design Name: 
// Module Name:    sc_adr 
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
module sc_adr(clk, DateIn, Dateout
    );
    input[31:0] DateIn;
	 input clk;
	 output reg [31:0] Dateout;
	 initial begin
        Dateout = 0;
    end
    always @(posedge clk) begin
	     Dateout = DateIn;
	 end 
endmodule
