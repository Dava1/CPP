#ifndef _GAME_H
#define _GAME_H
#pragma once
#include "Object.h" 
#include "MovingObject.h"
#define sizeObjects 10

class Game {
public:
	Game();
	~Game();
	void AddObject(Object* o);
	int* findIdOfStaticObject(double xMin, double yMin, double xMax, double yMax);
	MovingObject** findMovingObjectsInArea(double x, double y, double r)
	{
		MovingObject** result;
		result = &result[countObject];
		for (int i = 0; i < countObject; i++)
		{
			if (objects[i]->GetX() == x && objects[i]->GetY() == y && objects[i]->GetX() <= r && objects[i]->GetY() <= r)
			{
				result[i] = (MovingObject*)objects[i];
			}
		}
		return result;
	}
	MovingObject** findMovingObjectsInArea(double x, double y, double r,double uMin, double uMAx);
private:
	Object** objects;
	int countObject = 0;
};
#endif // !_GAME_H