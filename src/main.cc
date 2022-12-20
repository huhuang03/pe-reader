//
// Created by hwf on 2022/12/16.
//

#include <iostream>
#include <fstream>
#include <src/reader_util.h>


int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " file_path" << std::endl;
        return 0;
    }

    // read it.
    std::ifstream f;
    f.open(argv[1]);
    // ok, we got f

    // read ms-dos
    char magic[2];
    f.read(magic, 2);
    // magic is MZ

    f.seekg(0x3c, std::ios_base::seekdir::beg);
    char pPeMagic[4];
    f.read(pPeMagic, 4);
    reader_util::printCharArray(pPeMagic, 4);

    int offsetPe = reader_util::charArray2Int(pPeMagic, 4);

    f.seekg(offsetPe, std::ios_base::seekdir::beg);
    char peMagic[4];
    f.read(peMagic, 4);
    reader_util::printCharArray(peMagic, 4);
    return 0;
}