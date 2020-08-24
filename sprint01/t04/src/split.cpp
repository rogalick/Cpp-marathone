#include "stdAlgoV1.h"

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str);
    std::string tok;
 
    while(std::getline(ss, tok, delimiter))
        internal.push_back(tok);
    return internal;
} 