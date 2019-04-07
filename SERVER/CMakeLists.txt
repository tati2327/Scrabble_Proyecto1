cmake_minimum_required(VERSION 3.13)
project(SERVER)

set(CMAKE_CXX_STANDARD 14)
<<<<<<< HEAD

add_executable(SERVER main.cpp Server.cpp Server.h Game.cpp Game.h Board.cpp Board.h LinkedList.cpp LinkedList.h Node.cpp Node.h Player.cpp Player.h Dictionary.cpp Dictionary.h Tokens.cpp Tokens.h basura.cpp basura.h)
=======
include_directories(./include/rapidjson)

add_executable(SERVER main.cpp Server.cpp Server.h Game.cpp Game.h Board.cpp Board.h LinkedList.cpp LinkedList.h Node.cpp Node.h Player.cpp Player.h Dictionary.cpp Dictionary.h)
>>>>>>> 86051104b3c242bc2ce8b42f95538b55a1b0cfb5
