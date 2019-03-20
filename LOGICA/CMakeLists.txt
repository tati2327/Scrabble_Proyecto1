cmake_minimum_required(VERSION 3.13)
project(Josu)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Josu
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/untitled1
        cmake-build-debug/untitled1.cbp
        CMakeLists.txt
        game.cpp
        game.h
        keyboard.cpp
        keyboard.h
        linkedlist.cpp
        linkedlist.h
        main.cpp
        node.cpp
        node.h
        tokens.cpp
        tokens.h Dictionary.cpp Dictionary.h)
