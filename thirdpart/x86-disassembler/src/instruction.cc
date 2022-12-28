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

x86_disassembler::Instruction::Instruction(const char *opCode, int opCodeLen) : _opCode(opCode), _opCodeLen(opCodeLen) {

}

bool x86_disassembler::Instruction::check(std::istream *in) {
  if (this->_opCodeLen <= 0) {
    return true;
  }

  char* tmp = static_cast<char *>(malloc(this->_opCodeLen));
  for (int i = 0; i < this->_opCodeLen; i++) {
    tmp[i] = in->peek();
  }
  bool rst = tmp == this->_opCode;
  free(tmp);
  return rst;
}

void x86_disassembler::Instruction::read(std::istream *in) {
  // real read!!
  if (this->_opCodeLen <= 0) {
    return;
  }
  in->read((char *) this->_opCode, this->_opCodeLen);
}

x86_disassembler::Instruction::Instruction(const x86_disassembler::Instruction *other) {
  // 怎么做？
  if (other->_opCodeLen > 0) {
    this->_opCodeLen = other->_opCodeLen;
    this->_opCode = static_cast<const char *>(malloc(this->_opCodeLen));
    memcpy((void *) this->_opCode, other->_opCode, this->_opCodeLen);
  }

  if (other->_len > 0) {
    this->_len = other->_len;
    this->_content = static_cast<char *>(malloc(this->_len));
    memcpy((void *) this->_content, other->_content, this->_len);
  }
}
