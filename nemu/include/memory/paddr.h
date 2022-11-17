/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)
/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem(paddr_t addr) {
  // printf("CONFIG_MSIZE: %x\n",CONFIG_MSIZE);
  // printf("offset: %x\n",addr - CONFIG_MBASE);
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

extern uint64_t cpu_gpr_npc[32];
void npc_update_screen();
void npc_ram_write(uint32_t buf,unsigned long int data,int len,uint32_t pc);
unsigned long int npc_ram_read(uint32_t buf,int len);
void npc_ref_mem_cpy(uint64_t *ram_npc);
void difftest_step_npc(vaddr_t npc,int valid) ;
void difftest_init_npc(FILE* file,uint64_t *ram_npc);
void difftest_init_npc_ram_debug(FILE* file);
void npc_vga_update_screen(void) ;
// void npc_ram_write(void * buf,uint64_t data,int len);
// uint64_t npc_ram_read(void * buf,int len);
// extern uint64_t *cpu_gpr_npc;
#endif
