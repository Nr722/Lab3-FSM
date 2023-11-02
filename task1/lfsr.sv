module lfsr (
    input logic clk, //clock
    input logic rst, //reset
    input logic en,
    output logic [4:1] data_out //pseudo-random output
);
    logic [4:1] sreg;
    initial begin 
        sreg = 4'b1;
    end

always_ff @(posedge clk)
    if(en)
        sreg <= {sreg[3:1], sreg[4] ^ sreg[3]};    
        
    assign data_out = sreg;
endmodule
