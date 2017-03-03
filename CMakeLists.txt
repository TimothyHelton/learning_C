cmake_minimum_required(VERSION 3.6)
project(learning_C)
set (LEARNING_C_VERSION_MAJOR 1)
set (LEARNING_C_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCE_FILES main.cpp hello.h)
add_executable(learning_C ${SOURCE_FILES})