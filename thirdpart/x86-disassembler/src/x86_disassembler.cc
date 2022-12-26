//
// Created by hwf on 2022/12/26.
//
#include "../include/x86_disassembler.h"
#include "./instruction/all_instructions.h"
#include <iostream>

std::string x86_disassembler::disassemble(char* data, size_t len) {
  std::istringstream ss(std::string(data, len));
  std::vector<Instruction*> instructions;
  while (true) {
    bool found = false;
    for (const auto &item : allInstructions) {
      // 怎么判断到结尾了呢e
      if (item->check(&ss)) {
        // not good!!
        instructions.push_back(item);
        found = true;
        break;
      }
    }
    if (!found) {
      break;
    }
  }
  std::cout << "disassemble length: " << instructions.size() << std::endl;
  return "";
}