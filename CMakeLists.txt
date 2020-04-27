cmake_minimum_required(VERSION 3.16.4)

project(LL_Problem)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Werror -pthread")

add_executable(LL_Problem 
    src/main.cpp 
    src/ll.cpp)


