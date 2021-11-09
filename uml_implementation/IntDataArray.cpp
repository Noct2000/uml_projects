#include "IntDataArray.h"

IntDataArray::IntDataArray() { }
IntDataArray::~IntDataArray() { }

void IntDataArray::setData() {
	printf("Please enter array size of IntData\n");
	scanf("%d", &size);
	int buffer = 0;
	array = std::vector<BaseData*>();
	for (int i = 0; i < size; i++) {
		printf("Please enter number of IntData\n");
		scanf("%d", &buffer);
		array.push_back(new IntData(buffer));
		
	}
}

std::vector<BaseData*> IntDataArray::getData() {
	return array;
}

int IntDataArray::getSize() {
	return size;
}
