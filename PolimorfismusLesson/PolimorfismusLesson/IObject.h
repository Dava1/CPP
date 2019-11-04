#ifndef _OBJECT_H
#define _OBJECT_H
#include <string>

class IObject
{
	virtual ~IObject() {}
	virtual std::string toString();
};
#endif // !_OBJECT_H

