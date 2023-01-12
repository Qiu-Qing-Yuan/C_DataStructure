cmake_minimum_required(VERSION 3.19)
project(Stack C)

set(CMAKE_C_STANDARD 99)

add_executable(Stack main.c common.h stack.c)