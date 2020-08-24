#include "visitall.h"

void parser(std::deque<map> &path,int argc, char **argv){
    map tmp;

	for (int i = 0; i < argc - 1; i++) {
		std::vector<std::string> ss = split(std::string(argv[i + 1]), ',');
		 if (ss.size() != 3) {
            std::cout << "Argument " << argv[i + 1] << " is not valid" << std::endl;
            exit(1);
        }
        tmp.n = i;
        tmp.name = ss[0];
        try {
            if (ss[0] == "")
                throw false;
            size_t idx;
            int s = stoi(ss[1], &idx);
            if (ss[1].size() != idx)
                throw false;
            int d = stoi(ss[2], &idx);
            if (ss[2].size() != idx)
                throw false;
            tmp.stamina = s;
            tmp.distance = d;
        }
        catch(...) {
            std::cout << "Argument " << argv[i + 1] << " is not valid" << std::endl;
            exit(1);
        }
        path.push_back(tmp);
        
	}
}

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str);
    std::string tok;
 
    while(std::getline(ss, tok, delimiter))
        internal.push_back(tok);
    return internal;
} 