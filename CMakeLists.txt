cmake_minimum_required(VERSION 3.12)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructure main.cpp)
add_executable(LNode LNode.cpp)
add_executable(BiTree BiTree.cpp)
add_executable(HuffmanTree HuffmanTree.cpp)
add_executable(BiSortTree BiSortTree.cpp)
add_executable(InsertSort InsertSort.cpp)
add_executable(ShellSort ShellSort.cpp)