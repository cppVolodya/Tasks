// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>
#include <string>


namespace N_PalindromeChecker::N_Utilities
{
inline static std::string ReadStringFromConsole()
{
	std::string string;
	std::cout << "Enter the string: ";
	(void)std::getline(std::cin, string);

	return string;
}

inline static void DisplayResult(const bool is_palindrome)
{
	if(is_palindrome)
	{
		std::cout << "Entered string is a 'palindrome'!\n";
	}
	else
	{
		std::cout << "Entered string is not a 'palindrome'!\n";
	}
}
}  // namespace N_PalindromeChecker::N_Utilities

#endif  // UTILITIES_HPP
