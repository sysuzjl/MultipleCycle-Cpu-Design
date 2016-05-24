`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:34 05/12/2016 
// Design Name: 
// Module Name:    sc_cpu 
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
module sc_cpu(op, func, z, clock, resetn,
             wpc, wir, Inswmem, Datawmem, wreg, regrt, m2reg, aluc, alusrcb, pcsource, sext, state, wrRegData);
	 input  [5:0] op, func;
    input  z, clock, resetn;
    output reg   wpc, wir, Inswmem, wreg,m2reg, wrRegData;
 	 output reg Datawmem;
    output reg [2:0] aluc;
    output reg [1:0]  pcsource, regrt;
    output reg  sext,alusrcb;
    output reg [2:0] state;
    parameter [2:0]  sif  = 3'b000, // IF  state
                 sid  = 3'b001, // ID  state
                 sexe = 3'b010, // EXE state
                 smem = 3'b011, // MEM state
                 swb  = 3'b100; // WB  state
	reg [2:0] next_state;
	wire i_add,i_addi,i_sub,i_ori,i_and,i_or,i_sll, i_slt, i_j, i_jr, i_jal, i_move,i_sw,i_lw,i_beq,i_halt;
	assign i_add    = (op[5:0] == 6'b000000) ? 1 : 0;
	assign i_sub   = (op[5:0] == 6'b000001) ? 1 : 0;
	assign i_addi    = (op[5:0] == 6'b000010) ? 1 : 0;
	assign i_or      = (op[5:0] == 6'b010000) ? 1 : 0;
	assign i_and    = (op[5:0] == 6'b010001) ? 1 : 0;
	assign i_ori       = (op[5:0] == 6'b010010) ? 1 : 0;
	assign i_sll     = (op[5:0] == 6'b011000) ? 1 : 0;
	assign i_move = (op[5:0] == 6'b100000) ? 1 : 0;
	assign i_slt     = (op[5:0] == 6'b100111) ? 1 : 0;
	assign i_sw      = (op[5:0] == 6'b110000) ? 1 : 0;
	assign i_lw       = (op[5:0] == 6'b110001) ? 1 : 0;
	assign i_beq    = (op[5:0] == 6'b110100) ? 1 : 0;
	assign i_j    = (op[5:0] == 6'b111000) ? 1 : 0;
	assign i_jr    = (op[5:0] == 6'b111001) ? 1 : 0;
	assign i_jal    = (op[5:0] == 6'b111010) ? 1 : 0;
	assign i_halt    = (op[5:0] == 6'b111111) ? 1 : 0;
	always @* begin      // control signals' default outputs:
   	wpc =0;           // do not write pc 
		wir =0;           // do not write ir
		Inswmem =0;          // do not write memory
		Datawmem = 0;
		wreg =0;          // do not write register file 
	   aluc = 4'bx000;   // ALU operation: add
	   alusrcb = 2'h0;   // ALU input b: reg b
		regrt = 2'h0;         // reg dest no: rd
		m2reg =0;         // select reg c
		pcsource = 2'b00;  // select alu output
		sext = 1;         // sign extend
	   wrRegData = 0;
		case (state) //---------------------------------------- IF:
			sif: begin       // IF state
			   wpc = 0;
				wir =1;      // write IR	
				pcsource = 2'h0;
				Inswmem = 0;
				//alusrca = 1; //PC
				//alusrcb = 2'h1;  // 4
				next_state = sid;  // next state: ID
			end //--------------------------------------------- ID:   
			sid: begin   			// ID state
				 if (i_j || i_jal || i_jr || i_halt) begin
				  	  next_state = sif;
					  if (i_j) begin
					      wir = 0;
					      wpc = 1;
					      pcsource = 2'h3;
					  end else if (i_jr) begin
					      pcsource = 2'h2;
							wpc = 1;
							wir = 0;
							wreg = 0;
					  end  else if (i_jal) begin
					      wpc = 1;
							pcsource = 2'h3;
							wreg = 1;
							wir = 0;
							wrRegData = 0;
							regrt = 2'h0;
					  end else if (i_halt) begin
					      wpc = 0;
							wreg = 0;
					  end
				 end else if (i_add || i_sub || i_addi || i_and || i_or || i_ori || i_move || i_slt || i_sll || i_beq || i_sw || i_lw) begin
					  next_state = sexe;
					  wpc = 0;
					  wir = 0;
					  aluc = 3'h0;
					  alusrcb = 1;
					  sext = 1;
				     wreg = 0;
				 end
				  
			end //--------------------------------------------- EXE:	
			sexe: begin                   // EXE state
             if (i_sll) begin
				     wir = 0;
					  alusrcb = 1;
					  aluc = 3'b100;
					  next_state = swb;
				 end else if (i_add || i_sub || i_and || i_or || i_move || i_slt) begin
				     wir = 0;
					  alusrcb = 0;
					  next_state = swb;
					  if (i_add || i_move) begin
					      aluc = 3'b000;
					  end else if (i_sub) begin
					      aluc = 3'b001;
					  end else if (i_and) begin
					      aluc = 3'b110;
					  end else if (i_slt) begin
					      aluc = 3'b010;
					  end else begin
					      aluc = 3'b101;
					  end
				 end else if (i_ori || i_addi) begin
				     wir = 0;
					  alusrcb = 1;
					  next_state = swb;
				     if (i_addi) begin
							sext = 1;
							aluc = 3'b000;
					  end else begin
					      sext = 0;
							aluc = 3'b101;
					  end
				 end else if (i_beq) begin
				     wpc = 1;
					  wir = 0;
					  next_state = sif;
					  if (z)
					      pcsource = 2'b01;
					  else
					      pcsource = 2'b00;
					  aluc = 3'b001;
					  alusrcb = 0;
				 end else if (i_lw || i_sw) begin
				     sext = 1;
					  aluc = 3'b000;
					  alusrcb = 1;
					  next_state = smem;
					  
				 end
			end //--------------------------------------------- MEM:
			smem: begin 			// MEM state
				 if (i_sw) begin
					  Datawmem = 1;
					  wir = 0;
					  wpc = 1;
					  next_state = sif;
				 end else if (i_lw) begin
				     Datawmem = 0;
					  wir = 0;
					  next_state = swb;
					  m2reg = 1;
	 		        wrRegData = 1;
				 end
			end //--------------------------------------------- WB:
			swb: begin                    // WB state
			    next_state = sif;
				 wpc = 1;
				 if (i_lw) begin
				     m2reg = 1;
	 		        wrRegData = 1;
					  regrt = 2'h1;
				     wreg = 1;
					  wir = 0;
				 end else if (i_addi || i_ori) begin
				     wreg = 1;
					  m2reg = 0;
					  wrRegData = 1;
					  regrt = 2'h1;
					  wir = 0;
				 end else if (i_add || i_sub || i_and || i_or || i_move || i_slt) begin
				     wreg = 1;
					  m2reg = 0;
					  wrRegData = 1;
					  regrt = 2'h2;
	   			  wir = 0;
				 end else if (i_sll) begin
				     wreg = 1;
					  m2reg = 0;
					  wrRegData = 1;
					  regrt = 2'h1;
					  wir = 0;
				 end
			end //--------------------------------------------- END
		endcase
   end
	always @ (posedge clock) begin
		 if (resetn == 1) begin
			  state <= sif;
		 end else begin
			  state <= next_state;
		 end
	end
endmodule
