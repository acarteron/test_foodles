#ifndef __SENTENCE_HH__
#define __SENTENCE_HH__

#include <map>
#include <utility>
#include <vector>
#include "Tools.hpp"
#include <iostream>

bool cmp(std::pair<std::string, unsigned int>& a, std::pair<std::string, unsigned int>& b);

void insert_word(std::map<std::string, unsigned int> & words_count, std::string word);

std::vector<std::pair<std::string, unsigned int> >  get_word_count(const std::string sentence, int size);



#endif