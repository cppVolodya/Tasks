cmake_minimum_required(VERSION 3.22.1)
project(check_if_palindrome)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

add_executable(check_if_palindrome sources/main.cpp sources/palindrome_checker.cpp
                                   headers/utilities.hpp headers/palindrome_checker.hpp)
