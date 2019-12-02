#ifndef _ICOMPARABLE_H
#define _ICOMPARABLE_H
#include "IObject.h"



struct  IComparable: public IObject
{
public:
	virtual ~IComparable() {}
	virtual int compareTo(IComparable* object) const = 0;
};

#endif //!_ICOMPARABLE_H