// Copyright [2022] <Volodymyr Dorozhovets>"

#include "vowel_counter.hpp"


namespace N_VowelCounter
{
void VowelCounter::CountVowels()
{
	for (const auto &symbol : this->m_string)
	{
		const bool is_alpha{static_cast<bool>(std::isalpha(symbol))};
		if(is_alpha)
		{
			const char lowercase_symbol{static_cast<char>(std::tolower(symbol))};
			if (S_VOWELS.find(lowercase_symbol) != std::string::npos)
			{
				++this->m_vowel_count[lowercase_symbol];
			}
		}
	}
}
}  // namespace N_VowelCounter
