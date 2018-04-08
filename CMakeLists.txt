cmake_minimum_required(VERSION 3.9)
project(PAA)

set(CMAKE_CXX_STANDARD 11)

add_executable(PAA main.cpp quickSort.cpp quickSort.h radixSort.cpp radixSort.h heapSort.cpp heapSort.h shellSort.cpp shellSort.h sortAlgorithm.cpp sortAlgorithm.h)