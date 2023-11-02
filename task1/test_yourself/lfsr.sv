module lfsr (
    input logic clk, //clock
    input logic rst, //reset
    input logic en,
    output logic [7:1] data_out //pseudo-random output
);
logic [7:1] sreg;
initial begin 
    sreg = 7'b1;
end

always_ff @(posedge clk)
    if(en)
        sreg <= {sreg[6:1], sreg[7] ^ sreg[3]};    
    
assign data_out = sreg;
endmodule
