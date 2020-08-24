#include <iostream>
template <class RandomAccessIterator> 
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end){
    for (auto i = begin; i < end; i++)
        for (auto j = i + 1 ;j < end;j++)
            if (*i > *j)
               std::swap(*i,*j);
    return begin;
}
