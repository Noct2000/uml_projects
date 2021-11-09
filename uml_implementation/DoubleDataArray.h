#ifndef __DOUBLEDATAARRAY_H__
#define __DOUBLEDATAARRAY_H__

#include "BaseDataArray.h"
#include "DoubleData.h"

class DoubleDataArray : public BaseDataArray {
		private:
			std::vector<BaseData*> array;
			int size;
		public:
			DoubleDataArray();
			~DoubleDataArray();
			void setData();
			std::vector<BaseData*> getData();
			int getSize();
};

#endif
