#include "DoubleDataArray.h"

DoubleDataArray::DoubleDataArray() { }
DoubleDataArray::~DoubleDataArray() { }

void DoubleDataArray::setData() {
	printf("Please enter array size of DoubleData\n");
	scanf("%d", &size);
	array = std::vector<BaseData*>();
	double buffer = 0;
	for (int i = 0; i < size; i++) {
		printf("Please enter number of DoubleData\n");
		scanf("%lf", &buffer);
		array.push_back(new DoubleData(buffer));
		
	}
}

std::vector<BaseData*> DoubleDataArray::getData() {
	return array;
}

int DoubleDataArray::getSize() {
	return size;
}
