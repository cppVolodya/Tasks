// Copyright [2022] <Volodymyr Dorozhovets>"

#include <limits>

#include "vowel_counter.hpp"
#include "utilities.hpp"


int main()
{
	const auto string{N_VowelCounter::N_Utilities::ReadStringFromConsole()};

	N_VowelCounter::VowelCounter counter{string};
	counter.CountVowels();

	N_VowelCounter::N_Utilities::DisplayResult(counter.GetVowelCount());

	std::cout << "Total number of vowels: " << counter.GetTotalVowels() << std::endl;

	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	(void)std::cin.get();

	return 0;
}
