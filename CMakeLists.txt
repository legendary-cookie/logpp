cmake_minimum_required(VERSION 3.15)
project(logpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED NO)
set(CMAKE_CXX_FLAGS "-O3 -Wall -Wextra")

add_subdirectory(src)
add_subdirectory(examples)
