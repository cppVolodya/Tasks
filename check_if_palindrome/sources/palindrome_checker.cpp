// Copyright [2022] <Volodymyr Dorozhovets>"

#include "palindrome_checker.hpp"


namespace N_PalindromeChecker
{
bool PalindromeChecker::IsPalindromeWithoutAlgorithms()
{
	std::size_t start{0UL};
	std::size_t end{this->m_string.length() - 1UL};

	bool is_palindrome{true};
	while (start < end)
	{
		if (this->m_string[start] != this->m_string[end])
		{
			is_palindrome = false;
			break;
		}

		++start;
		--end;
	}
	return is_palindrome;
}
}  // namespace N_PalindromeChecker
