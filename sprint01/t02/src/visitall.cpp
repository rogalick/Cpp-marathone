#include "visitall.h"

int roadfront(std::deque<map> path,int j, int argc, std::deque<map> &town){
	int stamina = 0;
	for (int i = 0, n = j; i < argc - 1; ++i, ++n) {
		if (n == argc -1)
			n = 0;
		stamina += path[n].stamina;
		if (stamina >= path[n].distance){
			town.push_back(path[n]);
			stamina -= path[n].distance;
		}
		else
			return 0;
	}
	return 1;
}

int roadback(std::deque<map> path,int j, int argc, std::deque<map> &town){
	int stamina = 0;
	for (int i = 0, n = j, len = n - 1; i < argc - 1; ++i, --n, --len) {
		if (n == -1)
            n = argc - 2;
		if (len == -1)
            len = argc - 2;
		stamina += path[n].stamina;
		if (stamina >= path[len].distance) {
			town.push_back(path[n]);
			stamina -= path[len].distance;
		}
		else{
			return 0;
		}
	}
	return 1;
}