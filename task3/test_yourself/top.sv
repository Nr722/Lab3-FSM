module top #(
    parameter   D_WIDTH = 8
)(
    //interface signals
    input logic clk,
    input logic rst,
    input logic en,
    input  logic [16-1:0] N, // clock divided by N+1
    output logic [D_WIDTH-1:0] out
);

    logic address; //interconnect wire

clktick topclktick(
    .clk (clk),
    .rst (rst),
    .en (en),
    .N(N),
    .tick (address)
);

f1_fsm topf1_fsm (
    .clk (clk),
    .rst(rst),
    .en(address),
    .out(out)

);
endmodule
