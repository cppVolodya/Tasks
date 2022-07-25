// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include <string>


namespace N_StringReverser::N_Utilities
{
inline static std::string ReadStringFromConsole()
{
	std::string string;
	std::cout << "Enter the string: ";
	(void)std::getline(std::cin, string);

	return string;
}

inline static void DisplayResult(const std::string_view string)
{
	std::cout << "Reversed string: " << string << std::endl;
}
}  // namespace N_StringReverser::N_Utilities

#endif  // UTILITIES_HPP
