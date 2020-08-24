#include "./src/inventory.h"

int main(int argc, char const *argv[]) {
	std::array <char,12> arr;
	arr.fill('-');
	int invnumber = 0;

	while(1){
		std::cout << "Enter command:> ";
		std::string operate;
		std::cin >> operate;
		parser(operate,arr,invnumber);
	}
	return 0;
}