#include <iostream>

#include "sentence.hh"

int main(int argc, char** argv){
  if(argc>1){
    for(int i(1);i<argc;++i){
      std::cout<<argv[i]<<std::endl;
    }
  }else{
    std::cout<<"no arguments"<<std::endl;
  }
  
  std::vector<std::pair<std::string, unsigned int> > A = get_word_count(argv[1], Utils::stringTo<unsigned int>(argv[2]));
  for (auto& it : A) {
 
        std::cout << it.first << ' '
            << it.second << std::endl;
    }
    return 0;
}

/** \mainpage : 
 * \author lildurden
 * \version : 0.0 $
 * \date : mer. févr. 14 16:21:43 CET 2018 $
 * \section intro_sec Introduction
 * Contact: acarteron@openmailbox.org
 * Created on: mer. févr. 14 16:21:43 CET 2018
 *
 * \section install_sec Installation
 *
 * This is f***** easy
 *
 * \subsection step1 Step 1 : Compile
 *
 *  Run this command to the project root
 *  <br/>
 *  <code>make</code>
 *
 * \subsection step2 Step 2 : Launch
 *
 *  Compiled program can be found in the subfolder <code>./bin</code>, it is called <code></code>.
 * 
 *  \subsection step3 Step 3 : Otherwise
 *  
 *  You can read the file <code>README.RTFM</code> if it exists
 */

