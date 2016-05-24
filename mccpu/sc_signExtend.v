`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:50:53 05/12/2016 
// Design Name: 
// Module Name:    sc_signExtend 
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
module sc_signExtend(i_num, extSel, o_num
    );
  input wire[15:0] i_num;
  input wire extSel;
  output reg[31:0] o_num;
  initial begin
    o_num = 0;
  end
  always @(i_num or extSel) begin
    if (extSel) begin
      o_num <= {{16{i_num[15]}}, i_num[15:0]};
    end else begin
	    o_num <= {{16{0}}, i_num[15:0]};
	 end
  end

endmodule
