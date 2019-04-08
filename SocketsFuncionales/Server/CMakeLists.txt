cmake_minimum_required(VERSION 3.13)
project(Server)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHEAD_FLAG ON)
find_package(Threads)
include_directories(./include/rapidjson)

add_executable(Server main.cpp Server.cpp Server.h JSON.cpp JSON.h)

target_link_libraries(Server ${CMAKE_THREAD_LIBS_INIT})