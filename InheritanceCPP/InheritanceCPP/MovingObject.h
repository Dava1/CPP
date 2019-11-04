#ifndef _MOVING_OBJECT_H
#define _MOVING_OBJECT_H
#pragma once
#include "Object.h"
# define M_PI           3.14159265358979323846  

class MovingObject: public Object{
public:
	MovingObject(int id, double angleView);
	double GetAngleView() const;
	void SetAngleView(double angleView);
private:
	double angleView;
};
#endif // !_MOVING_OBJECT_H