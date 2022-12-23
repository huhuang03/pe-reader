add_library(reader-util src/reader_util.cc src/reader_util.h src/content.cc include/content.h src/section.cc include/section.h include/reader_util.h)

target_include_directories(reader-util INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")
