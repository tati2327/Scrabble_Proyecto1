cmake_minimum_required(VERSION 3.13)
project(PruebaJSON)

set(CMAKE_CXX_STANDARD 14)
include_directories(./include/rapidjson)

add_executable(PruebaJSON main.cpp JSON.cpp JSON.h)