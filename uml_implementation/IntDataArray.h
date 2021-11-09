#ifndef __INTDATAARRAY_H__
#define __INTDATAARRAY_H__

#include "BaseDataArray.h"
#include "IntData.h"

class IntDataArray : public BaseDataArray {
		private:
			std::vector<BaseData*> array;
			int size;
		public:
			IntDataArray();
			~IntDataArray();
			void setData();
			std::vector<BaseData*> getData();
			int getSize();
};

#endif
