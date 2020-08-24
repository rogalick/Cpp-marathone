#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

void parser(const std::vector<std::string>& str,std::map <std::string,std::string>& book);
std::vector<std::string> split(std::string str, char delimiter);