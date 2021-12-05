cmake_minimum_required(VERSION 3.20)
project(Doctor_CMake)

set(CMAKE_CXX_STANDARD 14)

add_executable(Doctor_CMake main.cpp Instruments.h coordinates.h)
