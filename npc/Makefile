TOPNAME = my_cpu
CODE_PWD = $(NPC_HOME)

INC_PATH = $(CODE_PWD)/include

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --cc --exe -Wno-STMTDLY --build --trace -O3 -CFLAGS "-lmingw32 -lSDL2main -lSDL2" -LDFLAGS -ldl -LDFLAGS "-lSDL2main -lSDL2" 

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")




# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
	
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image
IMG ?=
$(BIN): $(VSRCS) $(CSRCS) 
	$(VERILATOR) $(VERILATOR_CFLAGS) $(INCFLAGS)\
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
wave :
	gtkwave wave.vcd
all: default

fceux: $(BIN)
	@$^ ./bin/fceux-riscv64-nemu.bin

run: $(BIN) 
	@$^ $(IMG)
pal: $(BIN)
	@$^ ./bin/nanos-lite-riscv64-nemu.bin
debug: $(BIN)
	@$^ ./bin/shuixianhua-riscv64-nemu.bin	
benchmarks: $(BIN)
	@$^ ./bin/dhrystone-riscv64-nemu.bin
videotest: $(BIN)
	@$^ ./bin/video.bin
cputest: $(BIN)
	@$^ ./bin/movsx-riscv64-nemu.bin
	@$^ ./bin/sub-longlong-riscv64-nemu.bin
	@$^ ./bin/leap-year-riscv64-nemu.bin
	@$^ ./bin/to-lower-case-riscv64-nemu.bin
	@$^ ./bin/if-else-riscv64-nemu.bin
	@$^ ./bin/add-riscv64-nemu.bin
	@$^ ./bin/string-riscv64-nemu.bin
	@$^ ./bin/load-store-riscv64-nemu.bin
	@$^ ./bin/div-riscv64-nemu.bin
	@$^ ./bin/mul-longlong-riscv64-nemu.bin
	@$^ ./bin/shift-riscv64-nemu.bin
	@$^ ./bin/sum-riscv64-nemu.bin
	@$^ ./bin/add-longlong-riscv64-nemu.bin
	@$^ ./bin/recursion-riscv64-nemu.bin
	@$^ ./bin/fib-riscv64-nemu.bin
	@$^ ./bin/shuixianhua-riscv64-nemu.bin
	@$^ ./bin/wanshu-riscv64-nemu.bin
	@$^ ./bin/mov-c-riscv64-nemu.bin
	@$^ ./bin/bit-riscv64-nemu.bin
	@$^ ./bin/pascal-riscv64-nemu.bin
	@$^ ./bin/goldbach-riscv64-nemu.bin
	@$^ ./bin/unalign-riscv64-nemu.bin
	@$^ ./bin/max-riscv64-nemu.bin
	@$^ ./bin/min3-riscv64-nemu.bin
	@$^ ./bin/bubble-sort-riscv64-nemu.bin
	@$^ ./bin/prime-riscv64-nemu.bin
	@$^ ./bin/matrix-mul-riscv64-nemu.bin
	@$^ ./bin/switch-riscv64-nemu.bin
	@$^ ./bin/quick-sort-riscv64-nemu.bin
	@$^ ./bin/fact-riscv64-nemu.bin
	@$^ ./bin/dummy-riscv64-nemu.bin
	@$^ ./bin/select-sort-riscv64-nemu.bin
	@$^ ./bin/hello-str-riscv64-nemu.bin



clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run
