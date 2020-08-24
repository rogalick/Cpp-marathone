#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
	if (argc != 5){
		std::cerr << "usage:./automaton [name] [level] [health] [stamina]" << std::endl;
		return 0;
	}
	std::string name = argv[1];
	int level;
	try{
		level = std::stoi(argv[2]);
	}
	catch (std::exception const &e){
		std::cerr << "Invalid argument: " << argv[2] << std::endl;
		return 0;
	}
	float health;
	try {
		health = std::stof(argv[3]);
	}
	catch (std::exception const &e) {
		std::cerr << "Invalid argument: " << argv[3] << std::endl;
		return 0;
	}
	double stamina;
	try {
		stamina = std::stod(argv[4]);
	}
	catch (std::exception const &e) {
		std::cerr << "Invalid argument: " << argv[4] << std::endl;
		return 0;
	}
	std::cout << "Name = " << name << std::endl;
	std::cout << "Level = " << level << std::endl;
	std::cout << "Health = " << health << std::endl;
	std::cout << "Stamina = " << stamina << std::endl;
	return 0;
}