`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:07 05/12/2016 
// Design Name: 
// Module Name:    sc_addfour 
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
module sc_addfour(i_pc, o_pc
    );
  input wire [31:0] i_pc; //2^5им???ив?ж╠??бд 32им???ив??ивии?
  output wire [31:0] o_pc;
  assign o_pc[31:0] = i_pc[31:0] + 4;
endmodule
