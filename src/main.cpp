#include <iostream>

#include "sentence.hh"

int main(int argc, char** argv){
  
  std::vector<std::pair<std::string, unsigned int> > A = get_word_count(argv[1], Utils::stringTo<unsigned int>(argv[2]));
  std::cout<<"[\n";
  for (auto& it : A) {
    std::cout << "\t(" << it.first << ", "
    << it.second << "),\n";
  }
  std::cout<<"[\n";
  return 0;
}
