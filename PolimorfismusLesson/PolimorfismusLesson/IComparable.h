#ifndef _ICOMPARABLE_H
#define _ICOMPARABLE_H
#include "IObject.h"



class IComparable : virtual IObject
{
public:
	virtual ~IComparable() {}
	virtual int compareTo(IComparable* object);
	virtual std::string toString() override;
};

#endif //!_ICOMPARABLE_H