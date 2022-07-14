// Copyright [2022] <Volodymyr Dorozhovets>"

#ifndef VOWEL_COUNTER_HPP
#define VOWEL_COUNTER_HPP

#include <string>
#include <string_view>
#include <unordered_map>
#include <numeric>


namespace N_VowelCounter
{
class VowelCounter
{
public:
	inline constexpr static std::string_view S_VOWELS{"aeiouy"};
public:
	explicit VowelCounter(std::string_view string = "");

	void CountVowels();

	inline int GetTotalVowels() const;

	[[nodiscard]] inline std::unordered_map<char, int> GetVowelCount() const noexcept;
private:
	std::string m_string;

	std::unordered_map<char, int> m_vowel_count;
};

inline VowelCounter::VowelCounter(const std::string_view string)
	: m_string(string)
{
}

inline int VowelCounter::GetTotalVowels() const
{
	int total_vowels{std::accumulate(this->m_vowel_count.begin(), this->m_vowel_count.end(), 0,
									 [](const int &total, const std::pair<char, int> &vowel)
									 {
										 return total + vowel.second;
									 })};

	return total_vowels;
}

[[nodiscard]] inline std::unordered_map<char, int> VowelCounter::GetVowelCount() const noexcept
{
	return this->m_vowel_count;
}
}  // namespace N_VowelCounter

#endif  // VOWEL_COUNTER_HPP
