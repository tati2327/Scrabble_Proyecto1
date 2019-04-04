cmake_minimum_required(VERSION 3.13)
project(CLIENT)

set(CMAKE_CXX_STANDARD 14)

add_executable(CLIENT main.cpp LinkedList.cpp LinkedList.h Node.cpp Node.h Board.cpp Board.h Player.cpp Player.h)