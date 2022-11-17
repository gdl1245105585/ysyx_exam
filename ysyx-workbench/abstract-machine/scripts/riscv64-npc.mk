include $(AM_HOME)/scripts/isa/riscv64.mk
include $(AM_HOME)/scripts/platform/nemu.mk
NPC_HOME := /home/guodl/Desktop/ysyx/ysyx-workbench/npc
CFLAGS  += -DISA_H=\"riscv/riscv.h\"
AM_SRCS += riscv/nemu/start.S \
           riscv/nemu/cte.c \
           riscv/nemu/trap.S \
           riscv/nemu/vme.c
    

run: image
	$(MAKE) -C $(NPC_HOME) run IMG=$(IMAGE).bin