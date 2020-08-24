#include "castSpells.h"

 int* castToNonConstIntPtr(const int* ptr){
 	int *num = const_cast<int *>(ptr);
 	return num;
 }

int castFloatToInt(float number) {
	int num = static_cast<int>(number);
	return num;
}