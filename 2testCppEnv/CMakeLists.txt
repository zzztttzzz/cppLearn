cmake_minimum_required(VERSION 3.16)
project(2testCppEnv)

set(CMAKE_CXX_STANDARD 14)

add_executable(2testCppEnv main.cpp Log.cpp cmake-build-debug/Multi.cpp)