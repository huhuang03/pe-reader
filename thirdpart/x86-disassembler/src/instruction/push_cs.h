//
// Created by hwf on 2022/12/26.
//

#ifndef PE_READER_THIRDPART_X86_DISASSEMBLER_SRC_INSTRUCTION_PUSH_CS_H_
#define PE_READER_THIRDPART_X86_DISASSEMBLER_SRC_INSTRUCTION_PUSH_CS_H_

#include "../instruction.h"

namespace x86_disassembler {
class PushCS: public Instruction {
 public:
  PushCS();
  std::string toString() override;
};
}

#endif //PE_READER_THIRDPART_X86_DISASSEMBLER_SRC_INSTRUCTION_PUSH_CS_H_
