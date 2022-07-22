// Copyright [2022] <Volodymyr Dorozhovets>"

#include "pig_latin_converter.hpp"


namespace N_PigLatinConverter
{
std::string PigLatinConverter::ConvertString(const std::string &string)
{
	std::stringstream ss(string);
	std::vector<std::string> words;

	std::string word;
	while (ss >> word)
	{
		words.push_back(PigLatinConverter::ConvertWord(word));
	}

	std::stringstream result;
	for (const auto &w : words)
	{
		result << w << " ";
	}

	return result.str();
}

std::string PigLatinConverter::ConvertWord(const std::string &word)
{
	std::string result;
	std::string consonant_cluster;

	bool has_vowel{false};
	for(const auto &symbol : word)
	{
		if(not has_vowel && PigLatinConverter::IsVowel(symbol))
		{
			has_vowel = true;
		}

		if(not has_vowel)
		{
			consonant_cluster += symbol;
		}
		else
		{
			result += symbol;
		}
	}

	if(not has_vowel)
	{
		result = word;
	}
	else if(PigLatinConverter::IsVowel(word[0UL]))
	{
		result += "way";
	}
	else
	{
		result += consonant_cluster;
		result += "ay";
	}

	return result;
}

inline bool PigLatinConverter::IsVowel(char symbol)
{
	symbol = static_cast<char>(std::tolower(symbol));
	const auto result{PigLatinConverter::S_VOWELS.find(symbol) != std::string_view::npos};

	return result;
}
}  // namespace N_PigLatinConverter
