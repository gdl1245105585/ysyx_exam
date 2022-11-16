src = $(shell find  /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build -name *-nemu.bin)
all:
	verilator --cc --exe -Wno-STMTDLY --build --trace sim.cpp my_cpu.v
	obj_dir/Vmy_cpu

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu
	gtkwave wave.vcd
wave:
	gtkwave wave.vcd

gdb:	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --debug --gdb --trace -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	#obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/benchmarks/dhrystone/build/dhrystone-riscv64-nemu.bin

test:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -LDFLAGS -ldl sim.cpp my_cpu.v
	obj_dir/Vmy_cpu
pal:	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -O2 -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/nanos-lite/build/nanos-lite-riscv64-nemu.bin
fceux:	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -O2 -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2 " -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/fceux-am/build/fceux-riscv64-nemu.bin
benchmarks:	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -O2 -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/benchmarks/dhrystone/build/dhrystone-riscv64-nemu.bin

amdebug:$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/am-tests/build/amtest-riscv64-nemu.bin

debug:$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -y /home/guodl/Desktop/ysyx/ysyx-workbench/npc/csrc -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/movsx-riscv64-nemu.bin

cputest:	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --exe -Wno-STMTDLY --build --trace -CFLAGS "-lmingw32 -lSDLmain -lSDL -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDLmain -lSDL -lSDL2" sim.cpp my_cpu.v
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/movsx-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/sub-longlong-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/leap-year-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/to-lower-case-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/if-else-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/add-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/string-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/load-store-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/div-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/mul-longlong-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/shift-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/sum-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/add-longlong-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/recursion-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/fib-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/shuixianhua-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/wanshu-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/mov-c-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/bit-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/pascal-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/goldbach-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/unalign-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/max-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/min3-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/bubble-sort-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/prime-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/matrix-mul-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/switch-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/quick-sort-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/fact-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/dummy-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/select-sort-riscv64-nemu.bin
	obj_dir/Vmy_cpu /home/guodl/Desktop/ysyx/ysyx-workbench/ics2022/am-kernels/tests/cpu-tests/build/hello-str-riscv64-nemu.bin

