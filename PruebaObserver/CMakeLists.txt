cmake_minimum_required(VERSION 3.13)
project(PruebaObserver)

set(CMAKE_CXX_STANDARD 14)

add_executable(PruebaObserver main.cpp Subject.cpp Subject.h Observer.cpp Observer.h Product.cpp Product.h Client.cpp Client.h)