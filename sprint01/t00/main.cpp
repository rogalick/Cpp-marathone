#include "simplesort.h"

int main(int argc, char const *argv[])
{
	if(argc == 6){
	std::vector<std::string> str;
	for (int i = 1; i < 6; ++i)
		str.push_back(argv[i]);
	std::sort(str.begin(), str.end());
	for (int i = 0; i < 5; ++i)
	{
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
	}
	else
		std::cerr << "usage: ./simpleSort arg1 arg2 arg3 arg4 arg5" << std::endl;
	return 0;
}