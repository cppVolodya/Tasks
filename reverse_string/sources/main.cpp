// Copyright [2022] <Volodymyr Dorozhovets>"

#include <limits>

#include "string_reverser.hpp"
#include "utilities.hpp"


int main()
{
	const auto string{N_StringReverser::N_Utilities::ReadStringFromConsole()};
	N_StringReverser::StringReverser string_reverser{string};
	N_StringReverser::N_Utilities::DisplayResult(string_reverser.ReverseStringWithAlgorithms());
	N_StringReverser::N_Utilities::DisplayResult(string_reverser.ReverseStringWithoutAlgorithms());

	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	(void)std::cin.get();

	return 0;
}
