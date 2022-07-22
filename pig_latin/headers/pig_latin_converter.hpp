// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef PIG_LATIN_CONVERTER_HPP
#define PIG_LATIN_CONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>


namespace N_PigLatinConverter
{
class PigLatinConverter
{
public:
	static std::string ConvertString(const std::string &string);
private:
	inline constexpr static std::string_view S_VOWELS{"aeiouy"};
private:
	static std::string ConvertWord(const std::string &word);

	inline static bool IsVowel(char symbol);
};
}  // namespace N_PigLatinConverter

#endif  // PIG_LATIN_CONVERTER_HPP
