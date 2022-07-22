// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include <string>


namespace N_PigLatinConverter::N_Utilities
{
inline static std::string ReadStringFromConsole()
{
	std::string string;
	std::cout << "Enter the string: ";
	(void)std::getline(std::cin, string);

	return string;
}

inline static void DisplayResult(const std::string_view string_of_pig_latin)
{
	std::cout << "Pig Latin: " << string_of_pig_latin << std::endl;
}
}  // namespace N_PigLatinConverter::N_Utilities

#endif  // UTILITIES_HPP
