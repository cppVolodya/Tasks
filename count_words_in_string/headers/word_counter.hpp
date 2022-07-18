// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef WORD_COUNTER_HPP
#define WORD_COUNTER_HPP

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <fstream>
#include <limits>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <numeric>


namespace N_WordCounter
{
class WordCounter
{
public:
	inline void CountWordsFromString(std::string_view string  );
	void CountWordsFromFile 	    (std::string_view filename);

	inline void ShowResult();
private:
	void CountWords(std::istream &stream_data);

	void ShowNumberWordsInData		();
	inline void ShowTotalNumberWords();

	inline static void RemovePunctuationMarks(std::string *word);

	int CountTotalWords();
private:
	std::unordered_map<std::string, int> m_number_words_in_data;
};

inline void WordCounter::CountWordsFromString(const std::string_view string)
{
	std::istringstream input_string{string.data()};
	this->CountWords(input_string);
}

inline void WordCounter::ShowResult()
{
	this->ShowNumberWordsInData();
	this->ShowTotalNumberWords ();
}

inline void WordCounter::ShowTotalNumberWords()
{
	const auto total_words{this->CountTotalWords()};
	std::cout << "Total number of words: " << total_words << std::endl;
}
}  // namespace N_WordCounter

#endif  // WORD_COUNTER_HPP
