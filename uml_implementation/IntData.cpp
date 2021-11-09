#include "IntData.h"

IntData::IntData(int data) {
	m_data = data;
}

IntData::~IntData() { }

void IntData::print() {
		printf("%d\n", m_data);
}

void IntData::setData() {
	printf("Please enter int number: ");
	scanf("%d", &m_data);
}

void* IntData::getData() {
	return (void*) &m_data;
}
