cmake_minimum_required(VERSION 3.21)
project(C_ain C)

set(CMAKE_C_STANDARD 11)

add_executable(C_ain
        main.c "task1 znachenie.c" "task1 znachenie.h")
