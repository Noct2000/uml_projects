#include "DoubleData.h"

DoubleData::DoubleData(double data) {
	m_data = data;
}

DoubleData::~DoubleData() { }

void DoubleData::print() {
		printf("%lf\n", m_data);
}

void DoubleData::setData() {
	printf("Please enter double number: ");
	scanf("%lf", &m_data);
}

void* DoubleData::getData() {
	return (void*) &m_data;
}

