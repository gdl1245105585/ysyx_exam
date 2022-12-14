// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_sh2add(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SH2ADD));
  #include "insns/sh2add.h"
  trace_opcode(p,  MATCH_SH2ADD, insn);
  return npc;
}

reg_t rv64_sh2add(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_SH2ADD));
  #include "insns/sh2add.h"
  trace_opcode(p,  MATCH_SH2ADD, insn);
  return npc;
}
