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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <memory/paddr.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 300
CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();
int ecall_flag =0;
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  if(ecall_flag ==1)
  {
    IFDEF(CONFIG_DIFFTEST, ref_difftest_raise_intr(0xb));
  }
  else{
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  }
  
}
uint64_t time_isa=0;
uint64_t time_exec=0;

static void exec_once(Decode *s, vaddr_t pc) {
  //uint64_t timer_start1 = get_time();
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);


  // printf("data :%lx\n",paddr_read(0x83006cd8,8));
  //printf("cpu.gpr[17] :%lx addr :%lx\n",cpu.gpr[17],pc);
  // printf(" nemu :240 data :%lx\n",paddr_read(0x80000240,4));
  // printf(" npc :240 data :%lx\n",npc_ram_read(0x00000240,4));
  //assert(pc_record);
  //assert(fprintf(pc_record,"%lx\n",cpu.pc)!= 1);
  cpu.pc = s->dnpc;
  
  // printf("nemu ra :%lx at %lx\n",cpu.gpr[1],cpu.pc);
  //uint64_t timer_end1 = get_time();
 // time_exec += timer_end1-timer_start1;
// #ifdef CONFIG_ITRACE
//   char *p = s->logbuf;
//   p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
//   int ilen = s->snpc - s->pc;
//   int i;
//   uint8_t *inst = (uint8_t *)&s->isa.inst.val;
//   for (i = ilen - 1; i >= 0; i --) {
//     p += snprintf(p, 4, " %02x", inst[i]);
//   }
//   int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
//   int space_len = ilen_max - ilen;
//   if (space_len < 0) space_len = 0;
//   space_len = space_len * 3 + 1;
//   memset(p, ' ', space_len);
//   p += space_len;

//   void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
//   disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
//       MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
// #endif
}
static void execute(uint64_t n) {
  Decode s;
  //cpu.csr[0x300]= 0xa00001800;
  for (;n > 0; n --) {
    uint64_t timer_start1 = get_time();

    exec_once(&s, cpu.pc);
    uint64_t timer_end1 = get_time();
    time_isa += timer_end1-timer_start1;
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);

    if (nemu_state.state != NEMU_RUNNING) break;
    
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host isa spent = " NUMBERIC_FMT " us", time_isa);
  Log("host time_exec spent = " NUMBERIC_FMT " us", time_exec);
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;
  //fclose(pc_record);
  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
