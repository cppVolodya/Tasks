// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef STRING_REVERSER_HPP
#define STRING_REVERSER_HPP

#include <iostream>
#include <string>
#include <algorithm>


namespace N_StringReverser
{
class StringReverser
{
public:
	inline explicit StringReverser(std::string_view string = "");

	inline std::string ReverseStringWithAlgorithms();

	std::string ReverseStringWithoutAlgorithms();
private:
	std::string m_string;
};

inline StringReverser::StringReverser(std::string_view string)
	: m_string{string}
{
}

inline std::string StringReverser::ReverseStringWithAlgorithms()
{
	std::string reversed_string{this->m_string};
	std::reverse(reversed_string.begin(), reversed_string.end());

	return reversed_string;
}
}  // namespace N_StringReverser

#endif  // STRING_REVERSER_HPP
