#ifndef __BASEDATA_H__
#define __BASEDATA_H__

#include <cstdio>

class BaseData {
	public:
		BaseData();
		virtual ~BaseData();
		virtual void print()=0;
		virtual void setData()=0;
		virtual void* getData()=0;
		
};

#endif
