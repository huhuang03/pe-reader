cmake_minimum_required(VERSION 3.12)

project(pe-reader)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(thirdpart/reader-util)
add_subdirectory(thirdpart/x86-disassembler)

file(GLOB pe_reader_SRC src/*.cc)
add_executable(pe-reader ${pe_reader_SRC})
target_link_libraries(pe-reader reader-util x86-disassembler)