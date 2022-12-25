//
// Created by huhua on 2022/12/23.
//

#ifndef PE_READER_SRC_DOS_HEADER_H_
#define PE_READER_SRC_DOS_HEADER_H_

#include <reader_util.h>

class DosHeader: public reader_util::Section {
 public:
  DosHeader();
  reader_util::Content e_magic = reader_util::Content(2);
};

#endif //PE_READER_SRC_DOS_HEADER_H_
