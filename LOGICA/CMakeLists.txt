cmake_minimum_required(VERSION 3.13)
project(Scrabble)

set(CMAKE_CXX_STANDARD 14)

add_executable(Scrabble main.cpp linkedlist.cpp linkedlist.h keyboard.cpp keyboard.h tokens.cpp tokens.h tokens.cpp tokens.h game.cpp game.h node.cpp node.h player.cpp player.h dictionary.cpp dictionary.h)