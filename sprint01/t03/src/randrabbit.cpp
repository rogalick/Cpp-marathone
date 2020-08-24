#include "vampirerabbit.h"

void randrabbit(int sum, std::map<int, int>& map,
                std::list<Rabbit>& l_rbb){
	Rabbit tmp;
	std::random_device r;
	std::default_random_engine e1(r());
    int mean = 0;
	for (int i = 0; i < sum; ++i){
		tmp.isVampire = 0;
   		std::uniform_int_distribution<int> uniform_dist(1, 100);
   		mean = uniform_dist(e1);
		if(mean == 1){
			tmp.isVampire = 1;
			map[0]++;
		} else{
			std::uniform_int_distribution<int> uniform_dist(1, 2);
   			mean = uniform_dist(e1);
			 if (mean  == 1) {
				tmp.gender = Gender::Male;
				map[1]++;
			}
			else{
				tmp.gender = Gender::Female;
				map[2]++;
			}
		}
	tmp.age = 0;
    l_rbb.push_back(tmp);
	}
}
