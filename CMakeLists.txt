cmake_minimum_required(VERSION 3.12)

project(pe-reader)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(thirdpart/reader-util)

add_executable(pe-reader src/main.cc src/dos_header.cc)
target_include_directories(pe-reader PRIVATE thirdpart/reader-util)
target_link_libraries(pe-reader reader-util)