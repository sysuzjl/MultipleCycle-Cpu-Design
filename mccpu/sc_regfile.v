`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:17:50 05/12/2016 
// Design Name: 
// Module Name:    sc_regfile 
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
module sc_regfile(rs, rt, i_data, rd, we, clk, o_data_1, o_data_2
    );
  input [4:0] rs, rt, rd;
  input [31:0] i_data;
  input we, clk;
  output [31:0] o_data_1, o_data_2;
  reg [31:0] register [0:31];
  initial begin
    register[0] = 0;
  end
  assign o_data_1 = register[rs];
  assign o_data_2 = register[rt];
  always @(posedge clk) begin
    if ((rd != 0) && (we == 1)) begin
      register[rd] = i_data;
    end
  end
endmodule

