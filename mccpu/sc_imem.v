`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:43 05/12/2016 
// Design Name: 
// Module Name:    sc_imem 
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
module sc_imem( addr, read_en_, instruction
    );
    input read_en_;
    input [31:0] addr;
    output reg [31:0] instruction;
    reg [7:0] mem [0:350];
    initial begin
        mem[251] = 8'b11100000;
		  mem[250] = 8'b00000000;
		  mem[249] = 8'b00000000;
		  mem[248] = 8'b01000100;
		  mem[275] = 8'b00001000;
		  mem[274] = 8'b00000001;
		  mem[273] = 8'b00000000;
		  mem[272] = 8'b00110000;
		  mem[279] = 8'b01001000;
		  mem[278] = 8'b00000010;
		  mem[277] = 8'b00000000;
		  mem[276] = 8'b00001100;
		  mem[283] = 8'b00000000;
		  mem[282] = 8'b00100010;
		  mem[281] = 8'b00011000;
		  mem[280] = 8'b00000000;
		  mem[287] = 8'h04;
		  mem[286] = 8'h61;
		  mem[285] = 8'h20;
		  mem[284] = 8'h00;
		  mem[291] = 8'h44;
		  mem[290] = 8'h62;
		  mem[289] = 8'h28;
		  mem[288] = 8'h00;
		  mem[295] = 8'h40;
		  mem[294] = 8'h25;
		  mem[293] = 8'h40;
		  mem[292] = 8'h00;
		  mem[299] = 8'h81;
		  mem[298] = 8'h00;
		  mem[297] = 8'h50;
		  mem[296] = 8'h00;
		  mem[303] = 8'he8;
		  mem[302] = 8'h00;
		  mem[301] = 8'h00;
		  mem[300] = 8'h51;
		  mem[307] = 8'h9c;
		  mem[306] = 8'h22;
		  mem[305] = 8'h30;
		  mem[304] = 8'h00;
		  mem[311] = 8'h9c;
		  mem[310] = 8'h41;
		  mem[309] = 8'h38;
		  mem[308] = 8'h00;
		  mem[315] = 8'h60;
		  mem[314] = 8'h42;
		  mem[313] = 8'h00;
		  mem[312] = 8'h02;
		  mem[319] = 8'hd0;
		  mem[318] = 8'h22;
		  mem[317] = 8'hff;
		  mem[316] = 8'hfe;
		  mem[323] = 8'hfc;
		  mem[322] = 8'h00;
		  mem[321] = 8'h00;
		  mem[320] = 8'h00;
		  mem[327] = 8'hc0;
		  mem[326] = 8'h25;
		  mem[325] = 8'h00;
		  mem[324] = 8'h02;
		  mem[331] = 8'hc4;
		  mem[330] = 8'h2c;
		  mem[329] = 8'h00;
		  mem[328] = 8'h02;
		  mem[335] = 8'he7;
		  mem[334] = 8'he0;
		  mem[333] = 8'h00;
		  mem[332] = 8'h00;
        instruction = 0;
     end
     always @(addr or read_en_) begin				
			instruction[31:24] = mem[addr+3];
			instruction[23:16] = mem[addr+2];
         instruction[15:8] = mem[addr+1];
         instruction[7:0] = mem[addr];
   	end

endmodule
