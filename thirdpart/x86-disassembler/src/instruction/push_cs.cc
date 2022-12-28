//
// Created by hwf on 2022/12/26.
//

#include "push_cs.h"

x86_disassembler::PushCS::PushCS(): Instruction("0x0e", 1) {
}

std::string x86_disassembler::PushCS::toString() {
  return "push cs";
}
