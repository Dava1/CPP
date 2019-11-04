#include "StaticObject.h"

StaticObject::StaticObject(int id, TypeOfBarriers TypeOfBarrieres):Object(id)
{	
	this->typeOfBarriers = typeOfBarriers;
}

StaticObject::~StaticObject()
{
}

TypeOfBarriers StaticObject::GetTypeOfBarriers() const
{
	return TypeOfBarriers();
}


