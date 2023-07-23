cmake_minimum_required(VERSION 3.22)

project(parser)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE SOURCES src/ *.cpp)
list(FILTER SOURCES EXCLUDE REGEX ".*lexer.*$")
list(FILTER SOURCES EXCLUDE REGEX ".*cmake-build.*$")

add_library(parser STATIC ${SOURCES})
target_include_directories(parser PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/lexer/include)
add_executable(parser_runner main.cpp)
target_include_directories(parser_runner PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/lexer/include)
target_link_libraries(parser_runner PRIVATE lexer parser)

add_subdirectory(lexer)
