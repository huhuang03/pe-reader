//
// Created by huhua on 2022/12/25.
//

#ifndef PE_READER_THIRDPART_X86_DISASSEMBER_INCLUDE_X86_DISASSEMBLER_H_
#define PE_READER_THIRDPART_X86_DISASSEMBER_INCLUDE_X86_DISASSEMBLER_H_
#include <string>

namespace x86_disassembler {
// 逐行反汇编，返回一个可读字符串吧
std::string disassemble(char* data, size_t len);
}
#endif //PE_READER_THIRDPART_X86_DISASSEMBER_INCLUDE_X86_DISASSEMBLER_H_
