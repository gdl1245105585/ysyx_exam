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
#include <isa.h>
#include <cpu/difftest.h>
#include <memory/paddr.h>
#include "../local-include/reg.h"
void init_mem();
extern const char *regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // printf("reg[8] is %lx\n",ref_r->gpr[8]);
  // printf("npc reg[8] is %lx\n",cpu_gpr_npc[8]);
  //printf("pc is %lx\n",pc);
  for (int i=0;i<32;i++)
  {
    // if(cpu.gpr[i] != cpu_gpr_npc[i])
    // {
    //   printf("\n\nnreg is %x %s \n npc :%lx ,ref :%lx \nat pc:%lx\n",i,regs[i],cpu_gpr_npc[i],cpu.gpr[i],cpu.pc);
    //   //assert(0);
    //   return false;
    // } 
    if(cpu.gpr[i] != ref_r->gpr[i])
    {
      printf("\n\nnreg is %x %s \nref :%lx ,npc :%lx \nat pc:%lx\n",i,regs[i],ref_r->gpr[i],cpu.gpr[i],cpu.pc);
      return false;
    } 
  }
   return true;
}

void isa_difftest_attach() {
}
static bool check_flag=0;
static int cnt_err =0;
void difftest_step_npc(vaddr_t npc,int valid) {
  //difftest_regcpy(&cpu, DIFFTEST_TO_REF);

  if(check_flag ==1)
  {
    if(isa_difftest_checkregs(&cpu, npc)==0)
    cnt_err ++;;
   check_flag =0;
  }
  if(valid)
  {
    if(npc != cpu.pc)
    {
      printf("pc diff\n");
      printf(" nemu pc is %lx \n",cpu.pc);
      printf("npc is %lx\n",npc);
      cnt_err ++;
    }
    difftest_exec(1);
    check_flag =1;
  }
  if(cnt_err >15)
  assert(0);
}

void difftest_init_npc_ram_debug(FILE* file)
{
  printf("%lx\n",paddr_read(0x8306aa30,8));
  init_mem();
  cpu.pc = RESET_VECTOR;
  cpu.gpr[0] = 0;
  uint32_t img_size = 0;
  uint32_t data;
  assert(file);
  while (true)
  {
    if(fread(&data, 4, 1, file)==0)
    {
     break;
    }
    paddr_write(PMEM_LEFT+img_size,4,data);
    img_size = img_size +4;
  }
  //printf("%lx\n",paddr_read(0x8306aa30,8));
  return ;
}
void difftest_init_npc(FILE* file,uint64_t *ram_npc)
{
  //printf("%lx\n",paddr_read(0x8306aa30,8));
  init_mem();
  cpu.pc = RESET_VECTOR;
  cpu.gpr[0] = 0;
  uint32_t img_size = 0;
  uint32_t data;
  assert(file);
  while (true)
  {
    if(fread(&data, 4, 1, file)==0)
    {
     break;
    }
    paddr_write(PMEM_LEFT+img_size,4,data);
    //printf("\n\n%x is %.8lx",img_size,paddr_read(PMEM_LEFT+img_size,4));
    img_size = img_size +4;
  }
  //printf("%lx\n",paddr_read(0x8306aa30,8));
  assert(ram_npc);
  npc_ref_mem_cpy(ram_npc);
  return ;
}