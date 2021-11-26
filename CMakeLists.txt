cmake_minimum_required(VERSION 3.19)
project(SinglyLinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(SinglyLinkedList main.cpp src/Node.cpp src/Node.h src/List.cpp src/List.h src/Time.cpp src/Time.h)