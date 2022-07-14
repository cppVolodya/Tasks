// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include <string>
#include <unordered_map>

#include "vowel_counter.hpp"


namespace N_VowelCounter::N_Utilities
{
inline static std::string ReadStringFromConsole()
{
	std::string string;
	std::cout << "Enter the string: ";
	(void)std::getline(std::cin, string);

	return string;
}

extern void DisplayResult(const std::unordered_map<char, int> &vowel_count);
}  // namespace N_VowelCounter::N_Utilities

#endif  // UTILITIES_HPP
