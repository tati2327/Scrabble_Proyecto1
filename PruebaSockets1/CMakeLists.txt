cmake_minimum_required(VERSION 3.13)
project(PruebaServer)

set(CMAKE_CXX_STANDARD 14)

add_executable(PruebaServer main.cpp server.cpp server.h client.cpp client.h)