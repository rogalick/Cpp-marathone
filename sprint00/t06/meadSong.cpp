#include "meadSong.h"

void meadSong(int num) {
	std::cout << num;
	std::cout << " bottles of mead on the wall, " << num << " bottles of mead." << std::endl;
	if (num != 1)
		std::cout << "Take one down and pass it around, " << num - 1 << " bottles of mead on the wall." <<std::endl << std::endl;
}
