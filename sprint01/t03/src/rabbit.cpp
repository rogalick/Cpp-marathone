#include "vampirerabbit.h"

void dierabbit(std::map<int, int>& map,
                std::list<Rabbit>& l_rbb){
	 for (auto &iter : l_rbb){
	 	if((iter.age == 4 && iter.isVampire == 0)||(iter.age == 9 && iter.isVampire == 1 )){
	 		if (iter.isVampire == 1)
	 			map[0]--;
	 		else{
	 			if (iter.gender == Gender::Male){
	 				map[1]--;
	 			}
	 			else
	 				map[2]--;
	 		}
	 	}
	 }

}

void setvampire(std::map<int, int>& map,
                std::list<Rabbit>& l_rbb){
	int count = map[0];
	for (auto &iter : l_rbb){
		if (count == 0)
			break;
		if (iter.isVampire == 0)
		{
			count--;
			iter.isVampire = true;
			map[0]++;
			if (iter.gender == Gender::Male)
	 				map[1]--;
	 			else
	 				map[2]--;
		}
	}

}