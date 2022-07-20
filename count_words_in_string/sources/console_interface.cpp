// Copyright [2022] <Volodymyr Dorozhovets>"

#include "console_interface.hpp"
#include "word_counter.hpp"


namespace N_WordCounter
{
void ConsoleInterface::InteractWithUser()
{
	bool check{true};
	WordCounter word_counter;

	while(check)
	{
		ConsoleInterface::DisplayMenu();
		const Actions action{ConsoleInterface::GetUserAction()};

		switch(action)
		{
		case Actions::input_string:
		{
			word_counter.CountWordsFromString(ConsoleInterface::EnterString());
			word_counter.ShowResult();
			break;
		}
		case Actions::input_filename:
		{
			word_counter.CountWordsFromFile(ConsoleInterface::EnterFilename());
			word_counter.ShowResult();
			break;
		}
		case Actions::exit:
		{
			check = false;
			break;
		}
		default:
		{
			std::cout << "Incorrectly entered data!" << std::endl;
			break;
		}
		}
	}
}

inline void ConsoleInterface::DisplayMenu()
{
	std::cout << "[1] --- Enter the string\n"
				 "[2] --- Enter the filename\n\n"
				 "[0] --- Exit" << std::endl;
}

inline ConsoleInterface::Actions ConsoleInterface::GetUserAction()
{
	int action;
	std::cout << "Choose: ";
	std::cin >> action;

	return static_cast<Actions>(action);
}

std::string ConsoleInterface::EnterString()
{
	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter the string: ";
	std::string string;
	(void)std::getline(std::cin, string);

	return string;
}

std::string ConsoleInterface::EnterFilename()
{
	(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter the filename: ";
	std::string filename;
	std::cin >> filename;

	return filename;
}
}  // namespace N_WordCounter
