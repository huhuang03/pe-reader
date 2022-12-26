//
// Created by hwf on 2022/12/26.
//

#include "instruction.h"
x86_disassembler::Instruction::~Instruction() {
  if (this->_opCode != nullptr) {
    // What's the diff between delete and free??
    delete this->_opCode;
  }
}

x86_disassembler::Instruction::Instruction(const char *opCode, int opCodeLen): _opCode(opCode), _opCodeLen(opCodeLen) {

}
