cmake_minimum_required(VERSION 3.19)
project(LinkQueue C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkQueue main.c common.h queue.c)