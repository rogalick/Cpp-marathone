#include "movealong.h"

int main(int argc, char const *argv[])
{
    if(argc > 1){
  	    std::vector<std::string> str;
  	    for (int i = 1; i < argc; ++i)
  		      str.push_back(argv[i]);
  	    for (int i = 0; i < str.size(); ++i)
  	        for (int j = 0; j < str[i].size(); ++j)
  		          str[i][j] = (char)tolower(str[i][j]);
        for (int i = 0; i < str.size(); ++i) {
  	        std::size_t found = str[i].find("mercer");
            if (found < 1000000)
      	        std::cout << argv[i + 1] << ", move along! " << std::endl;
            found = str[i].find("emer");
            if (found < 1000000)
                std::cout << argv[i + 1]  << ", move along! " << std::endl;
            found = str[i].find("jim");
            if (found < 1000000)
                std::cout << argv[i + 1]  << ", move along! " << std::endl;
        }
    }
    else{
      std::cerr << "usage: ./moveAlong [args]" << std::endl;
    }
	return 0;
}