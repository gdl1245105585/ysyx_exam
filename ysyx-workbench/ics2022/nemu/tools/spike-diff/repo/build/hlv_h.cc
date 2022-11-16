// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_hlv_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HLV_H));
  #include "insns/hlv_h.h"
  trace_opcode(p,  MATCH_HLV_H, insn);
  return npc;
}

reg_t rv64_hlv_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_HLV_H));
  #include "insns/hlv_h.h"
  trace_opcode(p,  MATCH_HLV_H, insn);
  return npc;
}
