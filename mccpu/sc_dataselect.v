`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:04 05/12/2016 
// Design Name: 
// Module Name:    sc_dataselect 
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
module dataSelect_5_Bit(B, C, Ctrl, S);
  input [4:0] B, C;
  input [1:0]Ctrl;
  output reg [4:0] S;
  wire [4:0] A;
  assign A = 5'h1f;
  initial begin
        S = 0;
   end
  always @(*) begin
	   if (Ctrl == 2'b00)
          S = A;
      else if (Ctrl == 2'b01)
          S = B;
      else
          S = C;
	end 
endmodule

module dataSelect_32_Bit(A, B, Ctrl, S);
  input [31:0] A, B;
  input Ctrl;
  output [31:0] S;
  assign S = (Ctrl == 1'b1 ? B : A);
endmodule

module dataSelect_32_Bit_reg(A, B, Ctrl, S);
  input [31:0] A, B;
  input Ctrl;
  output reg [31:0] S;
  always @(*) begin
	   if (Ctrl == 1) begin
          S = A;
		end
      else begin
          S = B;
		end
	end 
endmodule

module dataSelect4_32_Bit(A, B, C, D, Ctrl, S);
  input [31:0] A, B, C, D;
  input [1:0]Ctrl;
  output reg [31:0] S;
  always @(*) begin
	   if (Ctrl == 2'b00) begin
          S = A;
		end
      else if (Ctrl == 2'b01) begin
          S = B;
		end else if (Ctrl == 2'b10) begin
		    S = C;
	   end else begin
          S = D;
		end
	end 
endmodule


