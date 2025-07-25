#include "VFPHUB_sqrt.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>

struct TestVector {
    uint32_t x;
    uint32_t expected_res;
};

std::vector<TestVector> read_csv(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    std::vector<TestVector> vectors;

    if (!file.is_open()) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        exit(1);
    }

    // Skip header
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string x_hex, z_hex;
        std::getline(ss, x_hex, ',');
        std::getline(ss, z_hex, ',');

        uint32_t x_val = std::stoul(x_hex, nullptr, 16);
        uint32_t z_val = std::stoul(z_hex, nullptr, 16);

        vectors.push_back({x_val, z_val});
    }

    return vectors;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VFPHUB_sqrt* top = new VFPHUB_sqrt;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::vector<TestVector> tests = read_csv("input.csv");

    vluint64_t main_time = 0;
    int test_index = 0;
    bool start_issued = false;
    bool waiting_for_finish = false;

    top->clk = 0;
    top->rst_l = 0;
    top->start = 0;
    top->x = 0;

    const vluint64_t MAX_SIM_TIME = 100000;  // Extend simulation time

    while (!Verilated::gotFinish() && main_time < MAX_SIM_TIME) {
        // Toggle clock
        if ((main_time % 2) == 0)
            top->clk = !top->clk;

        // Release reset after a few cycles
        if (main_time == 4)
            top->rst_l = 1;

        // Apply new input if not waiting
        if (top->rst_l && test_index < tests.size()) {
            if (!waiting_for_finish && !start_issued && top->clk) {
                top->x = tests[test_index].x;
                top->start = 1;
                start_issued = true;
            } else if (start_issued) {
                // Deassert start after one cycle
                top->start = 0;
                start_issued = false;
                waiting_for_finish = true;
            } else if (waiting_for_finish && top->finish) {
                // Check result
                uint32_t expected = tests[test_index].expected_res;
                uint32_t actual = top->res;

                

                if ((actual & 0x0FFFFFFF) != (expected & 0x0FFFFFFF)){
                    std::cout << "FAIL: ";
                    std::cout << "Test " << test_index + 1 << ": "
                          << "Input = 0x" << std::hex << tests[test_index].x
                          << ", Expected = 0x" << expected
                          << ", Got = 0x" << actual << std::endl;
                }
                    

               // std::cout << std::endl;

                test_index++;
                waiting_for_finish = false;
            }
        }

        top->eval();
        tfp->dump(main_time);
        main_time++;
    }

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
