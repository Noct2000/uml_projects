#ifndef __BASEDATAARRAY_H__
#define __BASEDATAARRAY_H__

#include <cstdio>
#include <vector>
#include "BaseData.h"
class BaseDataArray {
	public:
		BaseDataArray();
		virtual ~BaseDataArray();
		virtual void setData()=0;
		virtual std::vector<BaseData*> getData()=0;
		virtual int getSize()=0;
		
};

#endif
