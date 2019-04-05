cmake_minimum_required(VERSION 3.13)
project(SERVER)

set(CMAKE_CXX_STANDARD 14)
include_directories(./include/rapidjson)

add_executable(SERVER main.cpp Server.cpp Server.h Game.cpp Game.h Board.cpp Board.h LinkedList.cpp LinkedList.h Node.cpp Node.h Player.cpp Player.h Dictionary.cpp Dictionary.h)