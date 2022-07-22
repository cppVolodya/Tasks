// Copyright [2022] <Volodymyr Dorozhovets>"

#include <limits>

#include "pig_latin_converter.hpp"
#include "utilities.hpp"


int main()
{
	const auto string{N_PigLatinConverter::N_Utilities::ReadStringFromConsole()};
	const std::string string_of_pig_latin{N_PigLatinConverter::PigLatinConverter::ConvertString(string)};
	N_PigLatinConverter::N_Utilities::DisplayResult(string_of_pig_latin);

	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	(void)std::cin.get();

	return 0;
}
