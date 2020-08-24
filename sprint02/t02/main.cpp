#include "bookSaver.h"

int main(int argc, char **argv) {
    std::string command;
    std::map <std::string,std::string> book;

    while(true) {
        std::cout << "enter command:> ";
        getline(std::cin, command);
        std::vector<std::string> str = split(command,' ');
        if (str[0] == "add" || str[0] == "delete" || str[0] == "read"
         || str[0] == "list" || str[0] == "quit")
             parser(str,book);
         else
            std::cerr << "invalid command" << std::endl;
        // std::string line;
        // std::ifstream in(argv[1]); 
        // if (in.is_open()){
        //     while (getline(in, line)){
        //             book[argv[1]] += line;
        //         }
        //     }
        //     std::cout << book[argv[1]];
        //     if (errno) {
        //         std::cerr << "error" << std::endl;
        //         exit(1);
            
        // }
        // in.close();
    }
	
} 
 