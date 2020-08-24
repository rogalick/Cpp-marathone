#include "inventory.h"

void parser(std::string operate,std::array <char,12> &arr, int &invnumber) {
	std::string str;

	if (operate == "help"){
		std::getline(std::cin,str);
		if (str[1])
			std::cerr << "Invalid command." << std::endl;
		else
			help();
	}
	else if (operate == "show"){
		std::getline(std::cin,str);
		if (str[1])
			std::cerr << "Invalid command." << std::endl;
		else
			show(arr);
	}
	else if (operate == "exit") {
		std::getline(std::cin,str);
		if (str[1])
			std::cerr << "Invalid command." << std::endl;
		else {
			std::cout << "Bye." << std::endl;
			exit(1);
		}
	}
	else if (operate == "insert") {
		std::getline(std::cin,str);
		if (str[2] || !str[1])
			std::cerr << "Invalid command." << std::endl;
		else {
			insert(invnumber,str,arr);
		}
	}
	else if (operate == "remove") {
		std::getline(std::cin,str);
		if (str[2] || !str[1])
			std::cerr << "Invalid command." << std::endl;
		else {
			remove(invnumber,str,arr);
		}
	}
	else {
		std::getline(std::cin,str);
		std::cerr << "Invalid command." << std::endl;
	}

}


void remove(int &invnumber,std::string str, std::array <char,12> &arr){
	int find = 0;
	int i = 0;
	if (invnumber == 0)
	std::cerr << "Inventory is empty." << std::endl;
	else{
		if (str[1] == 'w' || str[1] == 'f' || str[1] == 'a' || str[1] == 'p'){
			for (i = 0; i < 12; ++i) {
				if (arr[i] == str[1]) {
					arr[i] = '-';
					invnumber--;
					find = 1;
					std::cout << str[1] << " was removed." << std::endl;
					break;
				}
			}
			if (find == 0)
				std::cerr << "Invalid item" << std::endl;
			else{
				for (int j = i; j < 11; ++j)
					arr[j] = arr[j + 1];
			}
		}
		else
			std::cerr << "Invalid item." << std::endl;
	}
}

void insert(int &invnumber,std::string str, std::array <char,12> &arr){
	if (invnumber != 11) {
		if (str[1] == 'w' || str[1] == 'f' || str[1] == 'a' || str[1] == 'p'){
			arr[invnumber] = str[1];
			invnumber++;
			std::cout << str[1] << " was inserted." <<std::endl;
		}
		else
			std::cerr << "Invalid item." << std::endl;
	}
	else
		std::cerr << "Inventory is full." << std::endl;
}

void show(std::array <char,12> arr){
	std::cout << "Inventory { ";
	for (int i = 0; i < 12; ++i)
		std::cout << arr[i] << " ";
	std::cout << "}" << std::endl;
}

void help(){
	std::cout << "Avaliable commands:" <<std::endl;
	std::cout << "1. insert <itemType>" <<std::endl;
	std::cout << "2. remove <itemType>" <<std::endl;
	std::cout << "3. show" <<std::endl;
	std::cout << "4. help" <<std::endl;
	std::cout << "5. exit" <<std::endl;

}