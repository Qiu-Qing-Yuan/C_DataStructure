cmake_minimum_required(VERSION 3.19)
project(SequentialQueue C)

set(CMAKE_C_STANDARD 99)

add_executable(SequentialQueue common.h queue.c)