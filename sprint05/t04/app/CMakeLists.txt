cmake_minimum_required(VERSION 3.18)

add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
        -Wno-unused-parameter
)
include_directories(src/)

file(GLOB CPPS "src/*.cpp" "main.cpp" "src/*.h")

add_executable(imperialVsStormcloak ${CPPS} ${SOURCE_EXE})

