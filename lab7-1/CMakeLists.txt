cmake_minimum_required(VERSION 3.10)
project(qwerty)

set(CMAKE_CXX_STANDARD 11)

add_library(mop_logic mop_logic.cpp)

add_executable(test_assert test_assert.cpp)
target_link_libraries(test_assert mop_logic)