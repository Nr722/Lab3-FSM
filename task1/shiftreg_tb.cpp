#include "Vlfsr.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "iostream"
#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000
#define ADDRESS_WIDTH 8

int main (int argc, char **argv, char **ev){
  int i;
  int clk;
    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vlfsr * top = new Vlfsr;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("Vlsfr.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return (-1);
    vbdHeader("lab 3: shiftReg");
    //initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en=0;
    for(i=0; i<MAX_SIM_CYC; i++){
      

      vbdSetMode(1);
      top->en=vbdFlag();

        //dump values into vcd file
      for(clk=0; clk<2; clk++){
        tfp->dump (2*i+clk);
        top->clk = !top->clk;
        top->eval ();
      }
      top->rst=0;
      vbdHex(1, top->data_out & 0xF);
      vbdBar(top->data_out & 0xFF);
      vbdCycle(i+1);
      // either simulation finished, or 'q' is pressed
      if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
        exit(0);                // ... exit if finish OR 'q' pressed
    }
    vbdClose(); //++++
    tfp->close();
    exit(0);
}