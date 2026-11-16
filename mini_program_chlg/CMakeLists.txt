cmake_minimum_required(VERSION 4.4)
project(mini_program_chlg)

set(CMAKE_CXX_STANDARD 26)

add_executable(mini_program_chlg src/main.cpp
        src/lib/print_message.cpp
        src/lib/print_message.h
)