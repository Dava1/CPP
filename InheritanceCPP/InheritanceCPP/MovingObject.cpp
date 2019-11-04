#include "MovingObject.h"

MovingObject::MovingObject(int id, double angleView):Object(id)
{
	this->angleView = angleView;
}

double MovingObject::GetAngleView() const
{
	return angleView;
}


void MovingObject::SetAngleView(double angleView)
{
	if (angleView > 0 && angleView < 2 * M_PI)
	{
		this->angleView = angleView;
	}
	else throw "Danger non correction angle!!!";
	
}
