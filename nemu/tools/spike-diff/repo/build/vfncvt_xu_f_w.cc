// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_vfncvt_xu_f_w(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFNCVT_XU_F_W));
  #include "insns/vfncvt_xu_f_w.h"
  trace_opcode(p,  MATCH_VFNCVT_XU_F_W, insn);
  return npc;
}

reg_t rv64_vfncvt_xu_f_w(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_VFNCVT_XU_F_W));
  #include "insns/vfncvt_xu_f_w.h"
  trace_opcode(p,  MATCH_VFNCVT_XU_F_W, insn);
  return npc;
}
