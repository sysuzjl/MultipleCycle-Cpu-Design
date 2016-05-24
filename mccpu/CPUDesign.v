`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:30:56 05/18/2016 
// Design Name: 
// Module Name:    CPUDesign 
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
module ManyCycleCPU(CLK, Reset, setpc, nowIns, nextAddr, aluRe, writeData, readData1, readData2, ExtendData, RAMDataOut, aluOp, Zero, pcSrc, insToCtrl, dataMemRW, State, nowAddr, wrreg);
  input CLK, Reset;
  input [31:0] setpc;
  output [2:0] State;
  output [31:0] nowIns, nextAddr, nowAddr,aluRe, writeData, readData1, readData2, ExtendData, RAMDataOut;
  output [2:0] aluOp;
  output [5:0] insToCtrl, wrreg;
  output Zero, dataMemRW;
  output [1:0]pcSrc;
  wire [31:0] i_pc,ALUDataA,ALUMem2Out, ALUDataB, ALUOut, o_pc_1, o_pc_2, o_pc_3, o_pc_4, InsOut, ALUResult, ReadData1, ReadData2, PCaddFour, extendData, DataOut;
  wire [31:0] o_pc;
  wire [2:0] ALUOp, state;
  wire [1:0]RegOut, PCSrc;
  wire zero, ExtSel, PCWre, InsMemRW, RegWre, ALUSrcB, DataMemRW, ALUM2Reg, wir, wrRegData;
  wire [4:0] fiveChoose1;
  wire [31:0] thChoose1, ALUMem2In, WirteData;
  reg [31:0] register [0:31];
  assign nowIns = InsOut;
  assign nowAddr = o_pc;
  assign nextAddr = i_pc;
  assign aluRe = ALUResult;
  assign wrreg = fiveChoose1;
  assign writeData = WirteData;
  assign readData1 = ReadData1;
  assign readData2 = ReadData2;
  assign ExtendData = extendData;
  assign RAMDataOut = ALUMem2Out;
  assign aluOp = ALUOp;
  assign Zero = zero;
  assign pcSrc = PCSrc;
  assign insToCtrl = o_pc_2[31:26];
  assign dataMemRW = DataMemRW;
  assign State = state;
  sc_pc sc_pc(CLK, i_pc, PCWre, Reset, o_pc, setpc);
  sc_addfour sc_addfour(o_pc, o_pc_1);
  sc_imem sc_imem(o_pc, InsMemRW, o_pc_2);
  sc_IR sc_IR(o_pc_2, CLK, wir, InsOut);
  sc_cpu sc_cpu(InsOut[31:26], InsOut[5:0], zero, CLK, Reset,
             PCWre, wir, InsMemRW, DataMemRW, RegWre, RegOut, ALUM2Reg, ALUOp, ALUSrcB, PCSrc, ExtSel, state, wrRegData);
  dataSelect_5_Bit dataSelect_5_Bit_1(InsOut[20:16], InsOut[15:11], RegOut, fiveChoose1);
  sc_regfile sc_regfile(InsOut[25:21], InsOut[20:16], WirteData, fiveChoose1, RegWre, CLK, ReadData1, ReadData2);
  sc_signExtend sc_signExtend(InsOut[15:0], ExtSel, extendData);
  sc_adr sc_adr(CLK, ReadData1, ALUDataA);
  sc_bdr sc_bdr(CLK, ReadData2, ALUDataB);
  dataSelect_32_Bit dataSelect_32_Bit_1(ALUDataB, extendData, ALUSrcB, thChoose1);
  sc_alu sc_alu(ALUDataA, thChoose1, ALUOp, zero, ALUResult);
  sc_aluout sc_aluout(CLK,  ALUResult,  ALUOut);
  sc_datemem sc_datemem(CLK,ALUDataB, ALUOut, DataMemRW, DataOut);
  dataSelect_32_Bit dataSelect_32_Bit_2(ALUResult, DataOut, ALUM2Reg, ALUMem2In);
  sc_alum2dr sc_alum2dr(CLK, ALUMem2In, ALUMem2Out);
  dataSelect_32_Bit dataSelect_32_Bit_3(o_pc_1, ALUMem2Out, wrRegData, WirteData);
  sc_pcaddmin sc_pcaddmin(o_pc_1, extendData, o_pc_3);
  sc_pcdirect sc_pcdirect(o_pc, InsOut[25:0], o_pc_4);
  dataSelect4_32_Bit dataSelect4_32_Bit_3(o_pc_1, o_pc_3, ReadData1, o_pc_4, PCSrc, i_pc);
endmodule