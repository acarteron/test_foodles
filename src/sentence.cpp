#include "sentence.hh"

bool cmp(std::pair<std::string, unsigned int>& a, std::pair<std::string, unsigned int>& b){
    if(a.second == b.second)
        return b.first > a.first;
    return a.second > b.second;
}

void insert_word(std::map<std::string, unsigned int> & words_count, std::string word){
    words_count[word] = words_count[word]+1;
}

std::vector<std::pair<std::string, unsigned int> > sort_words(std::map<std::string, unsigned int> words_count, unsigned int size){
    std::vector<std::pair<std::string, unsigned int> > A;
    for (auto& it : words_count) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    A.resize(size);
    return A;
}

std::vector<std::pair<std::string, unsigned int> >  get_word_count(const std::string sentence, int size){
    std::map<std::string, unsigned int> words_count;
    std::vector<std::string> words = Utils::splitString(sentence, " ");
    
    for(size_t i(0); i < words.size(); ++i){
        insert_word(words_count, words[i]);
    }
    
    return sort_words(words_count, size);
    
}