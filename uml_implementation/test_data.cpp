#include "IntDataArray.h"
#include "DoubleDataArray.h"
using namespace std;
int main() {
	IntDataArray* pIntArr = new IntDataArray();
	DoubleDataArray* pDoubleArr = new DoubleDataArray();
	pIntArr->setData();
	pDoubleArr->setData();
	vector<BaseData*> data1 =  pIntArr->getData();
	vector<BaseData*> data2 = pDoubleArr->getData();
	
	for (int i = 0; i < pIntArr->getSize(); i++) {
		printf("You entered in IntDataArray[%d]: ", i);
		data1[i]->print();
	
	}

	for (int i = 0; i < pDoubleArr->getSize(); i++) {
		printf("You entered in DoubleDataArray[%d]: ", i);
		data2[i]->print();

	}
	
	return 0;
}
