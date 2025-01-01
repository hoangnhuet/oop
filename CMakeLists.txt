cmake_minimum_required(VERSION 3.0)
# set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(oop)
include_directories(
    include)
add_executable(oop src/main.cpp src/obstacle.cpp)