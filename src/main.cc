//
// Created by hwf on 2022/12/16.
//

#include <iostream>
#include <fstream>
#include <reader_util.h>

namespace pe_reader {
typedef uint16_t WORD;
typedef uint32_t LONG;

typedef struct _IMAGE_DOS_HEADER {      // DOS .EXE header
  WORD e_magic;                     // Magic number
  WORD e_cblp;                      // Bytes on last page of file
  WORD e_cp;                        // Pages in file
  WORD e_crlc;                      // Relocations
  WORD e_cparhdr;                   // Size of header in paragraphs
  WORD e_minalloc;                  // Minimum extra paragraphs needed
  WORD e_maxalloc;                  // Maximum extra paragraphs needed
  WORD e_ss;                        // Initial (relative) SS value
  WORD e_sp;                        // Initial SP value
  WORD e_csum;                      // Checksum
  WORD e_ip;                        // Initial IP value
  WORD e_cs;                        // Initial (relative) CS value
  WORD e_lfarlc;                    // File address of relocation table
  WORD e_ovno;                      // Overlay number
  WORD e_res[4];                    // Reserved words
  WORD e_oemid;                     // OEM identifier (for e_oeminfo)
  WORD e_oeminfo;                   // OEM information; e_oemid specific
  WORD e_res2[10];                  // Reserved words
  LONG e_lfanew;                    // File address of new exe header
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;
}

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " file_path" << std::endl;
    return 0;
  }

  if (!reader_util::isFileExists(argv[1])) {
    std::cout << "file not exist: " << argv[1] << std::endl;
    return 1;
  }

  std::ifstream f;
  f.open(argv[1]);
  pe_reader::_IMAGE_DOS_HEADER dosHeader{};
  f.read(reinterpret_cast<char *>(&dosHeader), sizeof(dosHeader));
  int newHeader = reader_util::charArray2Int(&dosHeader.e_lfanew, sizeof dosHeader.e_lfanew);

  int dosInstructionContentLen = newHeader - sizeof dosHeader;
  char *dosInstructionContent = static_cast<char *>(malloc(dosInstructionContentLen));
  f.read(dosInstructionContent, dosInstructionContentLen);

  std::cout << "dosInstruction as hex: " << std::endl;
  reader_util::printAsHex(dosInstructionContent, dosInstructionContentLen);

  free(dosInstructionContent);
  return 0;
}