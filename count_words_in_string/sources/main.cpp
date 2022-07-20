// Copyright [2022] <Volodymyr Dorozhovets>"

#include <limits>

#include "console_interface.hpp"


int main()
{
	try
	{
		N_WordCounter::ConsoleInterface::InteractWithUser();
	}
	catch (const std::exception& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "Unknown error!" << std::endl;
	}

	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	(void)std::cin.get();

	return 0;
}
