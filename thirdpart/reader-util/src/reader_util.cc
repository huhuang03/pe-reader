//
// Created by hwf on 2022/12/16.
//

#include "reader_util.h"
#include <iostream>


void reader_util::printCharArray(const char *src, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << src[i];
    }
    std::cout << std::endl;
}

int reader_util::charArray2Int(const char *charArray, int len) {
    const unsigned char* valueArray = (const unsigned char *) charArray;
    int rst = 0;
    for (int i = len - 1; i >= 0; i--) {
        rst = rst << (2 << 8);
        rst += valueArray[i];
    }
    return rst;
}