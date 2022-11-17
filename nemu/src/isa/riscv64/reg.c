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
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
}

word_t isa_reg_str2val(const char *s, bool *success) {
if (strcmp(s, "$0") == 0)
  return cpu.gpr[0];
else if (strcmp(s, "ra") == 0)
  return cpu.gpr[1];
else if (strcmp(s, "sp") == 0)
  return cpu.gpr[2];
else if (strcmp(s, "gp") == 0)
  return cpu.gpr[3];
else if (strcmp(s, "tp") == 0)
  return cpu.gpr[4];
else if (strcmp(s, "t0") == 0)
  return cpu.gpr[5];
else if (strcmp(s, "t1") == 0)
  return cpu.gpr[6];
else if (strcmp(s, "s2") == 0)
  return cpu.gpr[7];
else if (strcmp(s, "s0") == 0)
  return cpu.gpr[8];
else if (strcmp(s, "s1") == 0)
  return cpu.gpr[9];
else if (strcmp(s, "a0") == 0)
  return cpu.gpr[10];
else if (strcmp(s, "a1") == 0)
  return cpu.gpr[11];
else if (strcmp(s, "a2") == 0)
  return cpu.gpr[12];
else if (strcmp(s, "a3") == 0)
  return cpu.gpr[13];
else if (strcmp(s, "a4") == 0)
  return cpu.gpr[14];
else if (strcmp(s, "a5") == 0)
  return cpu.gpr[15];
else if (strcmp(s, "a6") == 0)
  return cpu.gpr[16];
else if (strcmp(s, "a7") == 0)
  return cpu.gpr[17];
else if (strcmp(s, "s2") == 0)
  return cpu.gpr[18];
else if (strcmp(s, "s3") == 0)
  return cpu.gpr[19];
else if (strcmp(s, "s4") == 0)
  return cpu.gpr[20];
else if (strcmp(s, "s5") == 0)
  return cpu.gpr[21];
else if (strcmp(s, "s6") == 0)
  return cpu.gpr[22];
else if (strcmp(s, "s7") == 0)
  return cpu.gpr[23];
else if (strcmp(s, "s8") == 0)
  return cpu.gpr[24];
else if (strcmp(s, "s8") == 0)
  return cpu.gpr[25];
else if (strcmp(s, "s10") == 0)
  return cpu.gpr[26];
else if (strcmp(s, "t2") == 0)
  return cpu.gpr[27];
else if (strcmp(s, "t3") == 0)
  return cpu.gpr[28];
else if (strcmp(s, "t4") == 0)
  return cpu.gpr[29];
else if (strcmp(s, "t5") == 0)
  return cpu.gpr[30];
else if (strcmp(s, "t5") == 0)
  return cpu.gpr[31];

else  return 0;
}
