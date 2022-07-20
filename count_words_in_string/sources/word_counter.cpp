// Copyright [2022] <Volodymyr Dorozhovets>"

#include "word_counter.hpp"


namespace N_WordCounter
{
void WordCounter::CountWordsFromFile(const std::string_view filename)
{
	std::ifstream input_file{filename.data()};
	if (not static_cast<bool>(input_file))
	{
		std::cout << "The program cannot open this file for reading data: " << filename << "\n";
		(void)std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		(void)std::cin.get();

		throw std::runtime_error("The program cannot open this file for reading data");
	}

	this->CountWords(input_file);
}

void WordCounter::CountWords(std::istream &stream_data)
{
	m_number_words_in_data.clear();

	std::string word;
	while (stream_data >> word)
	{
		WordCounter::RemovePunctuationMarks(&word);

		if(not word.empty())
		{
			this->m_number_words_in_data[word]++;
		}
	}
}

void WordCounter::ShowNumberWordsInData()
{
	std::cout << "Number of words in data: \n";
	for (const auto &pair : this->m_number_words_in_data)
	{
		std::cout << std::setw(16) << std::left  << pair.first
				  << std::setw(4)  << std::right << pair.second << "\n";
	}
	std::cout << std::endl;
}

inline void WordCounter::RemovePunctuationMarks(std::string *word)
{
	(void)word->erase(std::remove_if(word->begin(), word->end(),
									 [](char symbol)
									 {
										 return not static_cast<bool>(std::isalnum(symbol));
									 }), word->end());
}

int WordCounter::CountTotalWords()
{
	const int total_words{std::accumulate(this->m_number_words_in_data.begin(), this->m_number_words_in_data.end(), 0,
										  [](const int &total, const std::pair<std::string, int> &vowel)
										  {
											  return total + vowel.second;
										  })};

	return total_words;
}
}  // namespace N_WordCounter
