#pragma once
#include "Object.h"
# define M_PI           3.14159265358979323846  /* pi */

class MovingObject:public Object{
public:
	MovingObject(int id, double angleView);
	double GetAngleView() const;
	void SetAngleView(double angleView);
private:
	double angleView;
};
