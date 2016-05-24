`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:43:30 05/12/2016 
// Design Name: 
// Module Name:    sc_datemem 
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
module sc_datemem(clk, i_data, addr, rw, o_data
    );
    input [31:0] i_data;
    input [31:0] addr;
    input rw, clk;
    output reg [31:0] o_data;
    reg [7:0] memory [0:63];
     initial begin
        o_data = 0;
     end
    always @(negedge clk) begin 
      if (rw) begin
          memory[addr+3] = i_data[31:24];
          memory[addr+2] = i_data[23:16];
          memory[addr+1] = i_data[15:8];
          memory[addr] = i_data[7:0];
      end else begin
          o_data[31:24] = memory[addr+3];
          o_data[23:16] = memory[addr+2];
          o_data[15:8] = memory[addr+1];
          o_data[7:0] = memory[addr];
		 end
    end
endmodule
