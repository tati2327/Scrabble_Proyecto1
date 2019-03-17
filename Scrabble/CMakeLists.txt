cmake_minimum_required(VERSION 3.13)
project(Scrabble)

set(CMAKE_CXX_STANDARD 14)

add_executable(Scrabble main.cpp socketAddr_in.h cmake-build-debug/Server.cpp cmake-build-debug/Server.h Client.cpp Client.h)