#include "stdAlgoV1.h"

int main(int argc, char **argv) {
	std::forward_list<std::string> allnames;
	int len = 0;

	parser(argc,argv,allnames);
	len = std::count_if(allnames.begin(), allnames.end(), [](std::string name){return true;});
    if (len == 0) {
        std::cerr << "error\n";
        exit(1);
    }
	std::cout << "size: " << len << '\n';
    std::cout << "contains 'rich' : ";
    printTrueFalse(std::any_of(allnames.begin(), allnames.end(), ifContainRich));
    std::cout << "\nnone of lengths is 15: ";
    printTrueFalse(std::any_of(allnames.begin(), allnames.end(), ifBidLen));
    std::cout << "\nall end with 'vel' : ";
    printTrueFalse(all_of(allnames.begin(), allnames.end(), ifContainVelEnd));
    std::cout << "\nnot contains 'mel' : " << std::count_if(allnames.begin(), allnames.end(), ifContainMel) << '\n';
}