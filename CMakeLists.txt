cmake_minimum_required(VERSION 3.15)
project(data C)

set(CMAKE_C_STANDARD 99)

add_executable(data1 insertsort.c)
add_executable(data2 halfsort.c)
add_executable(data3 shellsort.c)
add_executable(data4 quicksort.c)