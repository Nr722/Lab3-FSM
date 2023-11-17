#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "iostream"
#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 10000
#define ADDRESS_WIDTH 8

int main (int argc, char **argv, char **ev){
  int i;
  int clk;
    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Vf1_fsm * top = new Vf1_fsm;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("Vf1_fsm.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return (-1);
    vbdHeader("lab 3: task3");
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
    vbdBar(top->out & 0xFF);
    vbdCycle(i+1);
      // either simulation finished, or 'q' is pressed
      if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
        exit(0);                // ... exit if finish OR 'q' pressed
    }
    vbdClose(); //++++
    tfp->close();
    exit(0);
}