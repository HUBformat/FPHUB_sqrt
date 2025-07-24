#include "VFPHUB_sqrt.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VFPHUB_sqrt* top = new VFPHUB_sqrt;
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    vluint64_t main_time = 0;  // Simulation time in ticks

    // Initialize signals
    top->clk = 0;
    top->rst_l = 0;
    top->start = 0;
    top->x = 0;
    

    // Clocking and simulation loop
    while (!Verilated::gotFinish() && main_time < 1000) {
        // Toggle clock
        if ((main_time % 2) == 0) {
            top->clk = !top->clk;
        }

        // Apply stimuli
        if (main_time == 4) {
            top->rst_l = 1;
        }

        if (main_time == 8) {
            top->start = 1;
            //top->x =   0x41b70000; // tras escalado, igual que libro (deberia)
            top->x = 0x72EC29F7; //csv
            //top->x = 0x0BFB4855; // csv
            //top->x = 0x3f370000; // ejemplo del libro
            //top->x = 0x41100000; // 9
        }

        if (main_time == 12) {
            top->start = 0;
        }

        // Evaluate model
        top->eval();
        tfp->dump(main_time);
        main_time++;
    }

    // Cleanup
    tfp->close();
    delete top;
    delete tfp;

    return 0;
}
