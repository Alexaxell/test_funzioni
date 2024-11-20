cmake_minimum_required(VERSION 3.29)
project(test_funzioni C)

set(CMAKE_C_STANDARD 11)

add_executable(test_funzioni main.c
        myFunctions.c
        myFunctions.h)
