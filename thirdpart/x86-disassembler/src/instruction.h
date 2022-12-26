//
// Created by hwf on 2022/12/26.
//

#ifndef PE_READER_THIRDPART_X86_DISASSEMBER_SRC_INSTRUCT_H_
#define PE_READER_THIRDPART_X86_DISASSEMBER_SRC_INSTRUCT_H_

#include <sstream>

namespace x86_disassembler {

/**
 * 每个instruction会不会可以变长？？
 * 我觉得是不会
 */
class Instruction {
 public:
  ~Instruction();
  Instruction(const char* opCode,int opCodeLen);

  /**
   * @return 是否是符合的格式
   */
  bool check(std::istream in);

  void read();

 private:
  /**
   * opCode 内容
   */
  const char* _opCode = nullptr;
  /**
   * opCode 长度
   */
  int _opCodeLen;

};
}


#endif //PE_READER_THIRDPART_X86_DISASSEMBER_SRC_INSTRUCT_H_
