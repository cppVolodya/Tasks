cmake_minimum_required(VERSION 3.22.1)
project(pig_latin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

add_executable(pig_latin sources/main.cpp sources/pig_latin_converter.cpp
                         headers/utilities.hpp headers/pig_latin_converter.hpp)
