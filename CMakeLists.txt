cmake_minimum_required(VERSION 3.28)
project(DSA_WITH_C__)

set(CMAKE_CXX_STANDARD 17)

add_executable(DSA_WITH_C__
        Pointers/pointerDemo.cpp
        Pointers/wildPointer.cpp
        Pointers/NullPointer.cpp
        Pointers/danglingPointer.cpp
        Pointers/pointerDemo2.cpp
        Pointers/voidPointer.cpp
)
