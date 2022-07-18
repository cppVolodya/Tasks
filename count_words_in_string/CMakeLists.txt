cmake_minimum_required(VERSION 3.22.1)
project(count_words_in_string)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

add_executable(count_words_in_string sources/main.cpp sources/console_interface.cpp sources/word_counter.cpp
                                     headers/console_interface.hpp headers/word_counter.hpp)
