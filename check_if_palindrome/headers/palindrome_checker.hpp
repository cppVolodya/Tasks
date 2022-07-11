// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef PALINDROME_CHECKER_HPP
#define PALINDROME_CHECKER_HPP

#include <string_view>
#include <string>
#include <algorithm>


namespace N_PalindromeChecker
{
class PalindromeChecker
{
public:
	inline explicit PalindromeChecker(std::string_view string = "");

	inline bool IsPalindromeWithAlgorithms();

	bool IsPalindromeWithoutAlgorithms();
private:
	std::string m_string;
};

inline PalindromeChecker::PalindromeChecker(std::string_view string)
	: m_string{string}
{
}

inline bool PalindromeChecker::IsPalindromeWithAlgorithms()
{
	std::string reversed_string{this->m_string};
	std::reverse(reversed_string.begin(), reversed_string.end());

	return (this->m_string == reversed_string);
}
}  // namespace N_PalindromeChecker

#endif  // PALINDROME_CHECKER_HPP
