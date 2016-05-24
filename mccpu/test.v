`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:35 05/18/2016 
// Design Name: 
// Module Name:    test 
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
module test;

    // Inputs
    reg CLK;
    reg Reset;
    reg [31:0] setpc;

    // Outputs
    wire [31:0] InsOut;
    wire [31:0] nextAddr;
    wire [31:0] aluRe;
    wire [31:0] writeData;
    wire [31:0] readData1;
    wire [31:0] readData2;
	 wire [5:0] wrreg;
    wire [31:0] ExtendData;
    wire [31:0] RAMDataOut, nowAddr;
    wire [2:0] aluOp;
    wire Zero;
    wire [1:0]pcSrc;
    wire [2:0]	 state;
    wire [5:0] insToCtrl;
    wire dataMemRW;

    // Instantiate the Unit Under Test (UUT)
    ManyCycleCPU uut (
        .CLK(CLK), 
        .Reset(Reset), 
		  .setpc(setpc),
        .nowIns(InsOut), 
        .nextAddr(nextAddr), 
        .aluRe(aluRe), 
        .writeData(writeData), 
        .readData1(readData1), 
        .readData2(readData2), 
        .ExtendData(ExtendData), 
        .RAMDataOut(RAMDataOut), 
        .aluOp(aluOp), 
        .Zero(Zero), 
        .pcSrc(pcSrc), 
        .insToCtrl(insToCtrl), 
        .dataMemRW(dataMemRW),
		  .State(state),
		  .nowAddr(nowAddr),
		  .wrreg(wrreg)
    );

    initial begin
        // Initialize Inputs
        CLK = 0;
        Reset = 1;
		  setpc = 32'h000000f8;
        #50; 
            CLK = !CLK;
        #50;
            Reset = 0;
      forever #50 begin
            CLK = !CLK;
        end
    end
endmodule