// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_xperm_w(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_XPERM_W));
  #include "insns/xperm_w.h"
  trace_opcode(p,  MATCH_XPERM_W, insn);
  return npc;
}

reg_t rv64_xperm_w(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_XPERM_W));
  #include "insns/xperm_w.h"
  trace_opcode(p,  MATCH_XPERM_W, insn);
  return npc;
}
