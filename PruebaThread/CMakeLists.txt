cmake_minimum_required(VERSION 3.13)
project(PruebaThread)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads)

add_executable(PruebaThread main.cpp)

target_link_libraries(PruebaThread ${CMAKE_THREAD_LIBS_INIT})