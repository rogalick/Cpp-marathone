#include <iostream>
#include <array>

void parser(std::string operate,std::array <char,12> &arr, int &invnumber);
void help();
void show(std::array <char,12> arr);
void insert(int &invnumber, std::string str,std::array <char,12> &arr);
void remove(int &invnumber,std::string str, std::array <char,12> &arr);
