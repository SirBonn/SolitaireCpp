cmake_minimum_required(VERSION 3.27)
project(SolitaireCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(SolitaireCpp main.cpp
        node/Node.cpp
        node/Node.h)
