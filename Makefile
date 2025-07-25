# ==== CONFIGURATION ====
TOP_MODULE     = FPHUB_sqrt
TB_CPP         = main.cpp
VERILOG_SRCS   = FPHUB_sqrt.sv

# ==== GENERATED FILES ====
BUILD_DIR      = obj_dir
VTOP_EXE       = $(BUILD_DIR)/V$(TOP_MODULE)

# ==== COMPILATION FLAGS ====
VERILATOR_FLAGS = -Wall -cc --trace -Wno-fatal --unroll-count 128

# ==== DEFAULT TARGET ====
all: run

# ==== COMPILE DESIGN + TESTBENCH ====
$(VTOP_EXE): $(VERILOG_SRCS) $(TB_CPP)
	verilator $(VERILATOR_FLAGS) $(VERILOG_SRCS) --exe $(TB_CPP)
	make -C $(BUILD_DIR) -f V$(TOP_MODULE).mk V$(TOP_MODULE)

# ==== RUN SIMULATION ====
run: $(VTOP_EXE)
	$(VTOP_EXE)

# ==== VIEW WAVEFORM ====
wave: run
	gtkwave wave.vcd

# ==== CLEAN GENERATED FILES ====
clean:
	rm -rf $(BUILD_DIR) *.vcd *.log

.PHONY: all run wave clean
