#include "vampirerabbit.h"

void oldRabbit(std::list<Rabbit>& l_rbb) {
    for (auto &iter : l_rbb) {
        iter.age++;
    }
}

int main() {
	std::list<Rabbit> l_rbb;
	std::map <int,int> map;
	int sum = 10;
	randrabbit(sum,map,l_rbb);

	while(sum < 1000){
		std::cout << "Males: " << map[1] << std::endl;
        std::cout << "Females: " << map[2] << std::endl;
        std::cout << "Vampires: " << map[0] << std::endl;
        dierabbit(map,l_rbb);
        sleep(1);
        if (map [1] >= map [2])
        	randrabbit(map[2],map,l_rbb);
        else
        	randrabbit(map[1],map,l_rbb);
        setvampire(map,l_rbb);
        if (map[1] <= 0 || map[2] <= 0)
            break;
        sum = map[0] + map[1] + map[2];
        if (sum < 1000) {
            std::cout << std::endl;
            oldRabbit(l_rbb);
        } 
	}
	return 0;
}


