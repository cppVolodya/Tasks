// Copyright [2022] <Volodymyr Dorozhovets>"

#include "utilities.hpp"


namespace N_VowelCounter::N_Utilities
{
void DisplayResult(const std::unordered_map<char, int> &vowel_count)
{
	std::cout << "Vowel Counts:\n";
	for(const auto &vowel : VowelCounter::S_VOWELS)
	{
		int count{static_cast<bool>(vowel_count.count(vowel))
			? vowel_count.at(vowel)
			: 0};

		std::cout << "Number of '" << vowel << "'s: " << count << std::endl;
	}
}
}  // namespace N_VowelCounter::N_Utilities
