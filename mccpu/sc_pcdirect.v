`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:35:07 05/12/2016 
// Design Name: 
// Module Name:    sc_pcdirect 
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
module sc_pcdirect(i_pc, addr, o_pc
    );
    input [31:0] i_pc;
	 input [25:0] addr;
    output reg [31:0] o_pc;
	  initial begin
         o_pc = 0;
    end
	 always @(i_pc or addr) begin
	     o_pc[31:28] = i_pc[31:28];
		  o_pc[27:2] = addr[25:0];
		  o_pc[1:0] = 2'b00;
	 end
endmodule
