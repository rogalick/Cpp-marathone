#include "uniquewords.h"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "usage: ./uniqueWords [file_name]" << std::endl;
		exit(1);
	}
	std::set <std::string> s1;
	std::smatch result;
	std::regex regular("[a-zA-Z0-9'-]+");
	std::string line;
    std::ifstream in(argv[1]); 
    if (in.is_open()){
        while (getline(in, line)){
        	while(regex_search(line, result, regular)){
	        	s1.insert(result[0]);
	        	line = result.suffix();
	        }
        }
        }
        if (errno) {
            std::cerr << "error" << std::endl;
            exit(1);
        
    }
    in.close();
    std::string kk = argv[1];
    std::vector<std::string> ss = split(kk,'.');
    ss[0].append("_mod.txt");
    std::ofstream out;         
    out.open(ss[0]); 
    if (out.is_open()) {
    	for (auto &iter : s1) {
        out << iter << std::endl;
    }
    out.close();
}
	return 0;
}

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str);
    std::string tok;
 
    while(std::getline(ss, tok, delimiter))
        internal.push_back(tok);
    return internal;
} 