//
// Created by hwf on 2022/12/20.
//

#ifndef PE_READER_SECTION_H
#define PE_READER_SECTION_H

#include "./content.h"
#include <vector>

namespace reader_util {

/**
 * For now, don't support resize or dynamic change fields.
 */
class Section : public Content {
 private:
  std::vector<Content> _fields;

 public:
  Section(int size);
  Section(int size, const std::vector<Content>& fields);
  void read(std::istream in);
};
}

#endif //PE_READER_SECTION_H
