cmake_minimum_required(VERSION 3.12)

project(pe-reader)

add_subdirectory(thirdpart/reader-util)

set(CMAKE_CXX_STANDARD 11)
add_executable(pe-reader src/main.cc)
target_include_directories(pe-reader PRIVATE thirdpart/reader-util)
target_link_libraries(pe-reader reader-util)