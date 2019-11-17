#ifndef _GAME_H
#define _GAME_H
#pragma once
#include "Object.h" 
#include "MovingObject.h"
#define SIZE_OF_OBJECTS 10

class Game {
public:
	Game();
	~Game();
	void AddObject(Object* o);
	int* FindIdOfStaticObject(double xMin, double yMin, double xMax, double yMax) const;
	MovingObject** FindMovingObjectsInArea(double x, double y, double r);
	MovingObject** FindMovingObjectsInArea(double x, double y, double r,double uMin, double uMAx);
private:
	Object** objects;
	int countObject = 0;
};
#endif // !_GAME_H