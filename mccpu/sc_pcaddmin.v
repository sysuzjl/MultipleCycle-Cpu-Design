`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:32:56 05/12/2016 
// Design Name: 
// Module Name:    sc_pcaddmin 
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
module sc_pcaddmin(now_pc, addNum, o_pc
    );
  input [31:0] now_pc, addNum;
  output [31:0] o_pc;
  assign o_pc = now_pc + (addNum * 4); 

endmodule
