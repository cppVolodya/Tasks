cmake_minimum_required(VERSION 3.22.1)
project(reverse_string)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

add_executable(reverse_string sources/main.cpp sources/string_reverser.cpp
                              headers/utilities.hpp headers/string_reverser.hpp)
