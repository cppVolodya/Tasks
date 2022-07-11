// Copyright [2022] <Volodymyr Dorozhovets>"

#include <string>
#include <limits>

#include "utilities.hpp"
#include "palindrome_checker.hpp"


int main()
{
	const std::string string{N_PalindromeChecker::N_Utilities::ReadStringFromConsole()};

	N_PalindromeChecker::PalindromeChecker checker{string};
	N_PalindromeChecker::N_Utilities::DisplayResult(checker.IsPalindromeWithAlgorithms   ());
	N_PalindromeChecker::N_Utilities::DisplayResult(checker.IsPalindromeWithoutAlgorithms());

	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	(void)std::cin.get();

	return 0;
}
