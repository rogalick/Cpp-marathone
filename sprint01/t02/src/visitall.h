#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <deque>
#include <sstream>
#include <random>
#include <cmath>

struct map {
    std::string name;
    int stamina;
    int distance;
    int n;
};

void parser(std::deque<map> &path,int argc, char **argv);
int roadfront(std::deque<map> path, int j, int argc, std::deque<map> &town);
std::vector<std::string> split(std::string str, char delimiter);
int roadback(std::deque<map> path,int j, int argc, std::deque<map> &town);
