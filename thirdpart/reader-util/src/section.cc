//
// Created by hwf on 2022/12/20.
//

#include "../include/section.h"

reader_util::Section::Section(int size, const std::vector<Content>& fields): Content(size), _fields(fields) {}

// how to create a empty field??
reader_util::Section::Section(int size) : Section(size, std::vector<Content>()) {
}

void reader_util::Section::read(std::istream in) {
  // how can I call super.read??
}
