#ifndef _STATIC_OBJECT_H
#define _STATIC_OBJECT_H
#include "Object.h"

enum TypeOfBarriers {Rock,LittlePlant,BigPlant};

class StaticObject : public Object 
{
public:
	StaticObject(int id, TypeOfBarriers TypeOfBarrieres);
	~StaticObject();
	TypeOfBarriers GetTypeOfBarriers() const;

private:
	TypeOfBarriers typeOfBarriers;
};
#endif // !_STATIC_OBJECT_H
