#include<iostream>
#include<string>

template<class Container>
void outputAny(const Container& c){
	for (auto &iter :c)
		std::cout << iter << std::endl;
}
