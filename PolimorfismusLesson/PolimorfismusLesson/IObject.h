#ifndef _OBJECT_H
#define _OBJECT_H
#include <string>

struct IObject
{
public:
	virtual ~IObject() {}
	virtual std::string toString() const = 0;
};
#endif // !_OBJECT_H

