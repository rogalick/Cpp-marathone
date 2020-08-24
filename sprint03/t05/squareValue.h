#include <iterator>
#include <iostream>  
#include <fstream>  
#include <iterator>  

template <class Container>
void squareValue(Container& container){
	for (auto it = container.begin(); it != container.end(); it++)
        *it *= *it;
}