cmake_minimum_required(VERSION 3.27)
project(SolitaireCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(SolitaireCpp main.cpp
        node/Node.cpp
        node/Node.h
        solitaire/Card.cpp
        solitaire/Card.h
        dataStructures/Stack.cpp
        dataStructures/Stack.h
        dataStructures/Queue.h
        dataStructures/Queue.cpp
        solitaire/Game.cpp
        solitaire/Game.h
        solitaire/Referee.h
        solitaire/Referee.cpp
        node/DNode.cpp
)
