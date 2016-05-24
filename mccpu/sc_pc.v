`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:29 05/12/2016 
// Design Name: 
// Module Name:    sc_pc 
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
module sc_pc(clk, i_pc, pcWire, reset, o_pc, set_pc
    );
  input wire clk, pcWire, reset;
  input wire [31:0] i_pc;
  input wire [31:0]set_pc;
  output reg [31:0] o_pc;
  always @(posedge clk) begin
    if (reset) begin
      o_pc = set_pc;
    end else if (pcWire) begin
      o_pc = i_pc;
    end else if (!pcWire) begin //¨ª¡ê?¨²
        o_pc = o_pc;
     end
  end

endmodule
