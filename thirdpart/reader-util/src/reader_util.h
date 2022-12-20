//
// Created by hwf on 2022/12/16.
//

#ifndef PE_READER_READER_UTIL_H
#define PE_READER_READER_UTIL_H
namespace reader_util {
    /**
     * This will print charArray append with a new line.
     */
    void printCharArray(const char* src, int len);

    /**
     * char array to int little ending
     */
    int charArray2Int(const char* charArray, int len);
}
#endif //PE_READER_READER_UTIL_H
