cmake_minimum_required(VERSION 3.13)
project(Server)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHEAD_FLAG ON)
find_package(Threads)

add_executable(Server main.cpp Server.cpp Server.h)

target_link_libraries(Server ${CMAKE_THREAD_LIBS_INIT})