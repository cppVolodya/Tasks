// Copyright [2022] <Volodymyr Dorozhovets>"

#include "string_reverser.hpp"


namespace N_StringReverser
{
std::string StringReverser::ReverseStringWithoutAlgorithms()
{
	std::string reversed_string;
	reversed_string.reserve(this->m_string.size());

	for (auto it = this->m_string.rbegin(); it != this->m_string.rend(); ++it)
	{
		reversed_string.push_back(*it);
	}

	return reversed_string;
}
}  // namespace N_StringReverser
