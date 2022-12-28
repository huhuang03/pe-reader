//
// Created by hwf on 2022/12/26.
//

#include "all_instructions.h"
#include "./push_cs.h"

std::vector<x86_disassembler::Instruction*> x86_disassembler::allInstructions = {new x86_disassembler::PushCS()};