`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:17 05/12/2016 
// Design Name: 
// Module Name:    sc_IR 
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
module sc_IR(DateIn, CLK,IRWre,InsOut
    );
  input CLK;
  input IRWre;
  input [31:0] DateIn;
  output reg [31:0] InsOut;
  reg [31:0]insReg;
  initial begin
      InsOut = 0;
  end
  always @(posedge CLK or IRWre) begin
    if (IRWre == 1) begin
	     InsOut = DateIn;
    end	
    insReg = DateIn; 	  
  end
endmodule
