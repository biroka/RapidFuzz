#pragma once
#include <string>
#include "utils.hpp"

namespace fuzz {
percent ratio(const std::wstring_view& s1, const std::wstring_view& s2, percent score_cutoff = 0);
percent partial_ratio(std::wstring_view s1, std::wstring_view s2, percent score_cutoff = 0);

percent token_sort_ratio(const std::wstring_view& a, const std::wstring_view& b, percent score_cutoff = 0);
percent partial_token_sort_ratio(const std::wstring_view& a, const std::wstring_view& b, percent score_cutoff = 0);

percent token_set_ratio(const std::wstring_view& s1, const std::wstring_view& s2, percent score_cutoff = 0);
percent partial_token_set_ratio(const std::wstring_view& s1, const std::wstring_view& s2, percent score_cutoff = 0);

percent token_ratio(const Sentence& s1, const Sentence& s2, percent score_cutoff = 0);
percent partial_token_ratio(const std::wstring_view& s1, const std::wstring_view& s2, percent score_cutoff = 0);


std::size_t bitmap_distance(const Sentence& s1, const Sentence& s2);
percent bitmap_ratio(const Sentence& s1, const Sentence& s2, percent score_cutoff = 0);
percent length_ratio(const Sentence& s1, const Sentence& s2, percent score_cutoff = 0);
percent quick_lev_estimate(const Sentence& s1, const Sentence& s2, percent score_cutoff = 0);

percent WRatio(const Sentence& s1, const Sentence& s2, percent score_cutoff = 0);
}
