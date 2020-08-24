#include "visitall.h"

int main(int argc, char **argv)
{
	std::deque<map> path;
	std::deque<map> town;
	if (argc < 2) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]\n";
        return 1;
    }
	parser(path,argc,argv);
	int flag = 0;
	for (int i = 0; i < path.size(); ++i) {
		town.resize(0);
			flag = roadfront(path,i,argc,town);
			if (flag == 1) {
				for (int i = 0; i < town.size(); ++i)
					std::cout <<town[i].n <<"." << town[i].name <<std::endl;
				exit(1);
			}
	}
	if (flag == 0) {
		for (int i = 0; i < path.size(); ++i) {
			town.resize(0);
			flag = roadback(path,i,argc,town);
			if (flag == 1) {
				for (int i = 0; i < town.size(); ++i)
					std::cout <<town[i].n <<"." << town[i].name <<std::endl;
				exit(1);
			}
		}
	}
	else{
		std::cerr << "Mission: Impossible\n";
	}
	return 0;
}