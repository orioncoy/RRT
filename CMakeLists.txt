cmake_minimum_required(VERSION 3.28)
project(RRT)

set(CMAKE_CXX_STANDARD 17)

add_executable(RRT
        src/render/vec3.h
        src/render/renderer.cpp
        src/main.cpp
        src/ui/interface.h
        src/ui/interface.cpp
        src/ui/interface.h
        src/render/vec3.h)
