#include "meadSong.h"

int main(int argc, char const *argv[]) {
	for (int i = 99; i > 0; i-=2)
		meadSong(i);
	std::cout << "Take it down and pass it around, no more bottles of mead on the wall." << std::endl << std::endl;
	std::cout << "No more bottles of mead on the wall, no more bottles of mead." << std::endl;
	std::cout << "Go to the store and buy some more, 99 bottles of mead on the wall." <<std::endl;
	return 0;
}
