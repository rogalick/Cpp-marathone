cmake_minimum_required(VERSION 3.18)

project(main)

add_compile_options(
        -std=c++17
        -Werror
        -Wall
        -Wextra
        -Wpedantic
        -Wno-unused-parameter
)

set(SOURCE_EXE main.cpp)

add_executable(UtilLibrary ${SOURCE_EXE})
			# Добавление подпроекта, указывается имя дирректории

target_link_libraries(UtilLibrary utils)