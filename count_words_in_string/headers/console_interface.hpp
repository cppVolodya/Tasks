// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef CONSOLE_INTERFACE_HPP
#define CONSOLE_INTERFACE_HPP

#include <iostream>
#include <string>


namespace N_WordCounter
{
class ConsoleInterface
{
public:
	static void InteractWithUser();
private:
	enum class Actions
	{
		exit,
		input_string,
		input_filename
	};
private:
	inline static void DisplayMenu();

	inline static Actions GetUserAction();

	static std::string EnterString();

	static std::string EnterFilename();
};
}  // namespace N_WordCounter

#endif  // CONSOLE_INTERFACE_HPP
