cmake_minimum_required(VERSION 3.22.1)
project(count_vowels)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

add_executable(count_vowels sources/main.cpp sources/vowel_counter.cpp sources/utilities.cpp
                            headers/utilities.hpp headers/vowel_counter.hpp)
