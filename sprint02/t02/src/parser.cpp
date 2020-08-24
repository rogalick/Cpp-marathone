#include "bookSaver.h"

void parser(const std::vector<std::string>& str,std::map <std::string,std::string>& book) {
	if (str[0] == "quit") {
		std::cerr << "bye" << std::endl;
		exit(1);
	}
	if (str[0] == "add" && str.size() == 2) {
		std::string path = "./library/" + str[1];
		std::ifstream in(path);
		if (in.is_open()){
			std::string line;
			while (getline(in, line))
            	book[str[1]] += line;
           in.close();
           std::cout << str[1] << " added" << std::endl;
		}
		else
        	std::cerr << "invalid book" << std::endl;
	}
	else if (str[0] == "list" && str.size() == 1){
		for (auto &elem: book)
			std::cout << elem.first << std::endl;
	}
	else if(str[0] == "delete" && str.size() == 2) {
		std::map<std::string,std::string>::iterator it;
		it = book.find(str[1]);
		if(it != book.end()){
			book[str[1]].erase();
			std::cout << str[1] << " deleted" << std::endl;
		}
		else
			std::cerr << "invalide book" << std::endl;
	}
	else if(str[0] == "read" && str.size() == 2) {
		if(book.count(str[1]) == 1){
			for (auto &elem: book)
				std::cout << elem.second << std::endl;
		}
		else 
			std::cerr << "invalid book" << std::endl;
	}
	else
		std::cerr << "invalid command" << std::endl;
}
