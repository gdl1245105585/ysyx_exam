#!/bin/bash
export PATH=$RISCV/bin:$PATH
riscv64-unknown-elf-objdump -d pal-riscv64 > ramdisk.asm


