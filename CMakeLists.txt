cmake_minimum_required(VERSION 3.28)
project(RRT)

set(CMAKE_CXX_STANDARD 17)

add_executable(RRT src/main.cpp
        src/render/vec3.h
        src/render/color.h
        src/render/ray.h
        src/render/hittable.h
        src/render/sphere.h)
