#include "MyMap.h"
MyMap::MyMap() {
	size = 1;	
}
void MyMap::addSize(int new_size) {
	size += new_size;
}
int MyMap::getSize() {
	return size;
}