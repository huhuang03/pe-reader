project(x86-disassembler)

file(GLOB x86_disassembler_SRC src/*.cc)
add_library(x86-disassembler ${x86_disassembler_SRC})
target_include_directories(x86-disassembler INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)