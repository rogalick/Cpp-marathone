#include <iostream>
#include <iterator>

template <typename Container>
void outputContainer(const Container& container) {
	copy(container.begin(), container.end(), std::ostream_iterator<int>(std::cout,"\n"));
}