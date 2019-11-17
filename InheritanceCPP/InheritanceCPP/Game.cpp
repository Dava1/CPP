#include "Game.h"
#include "StaticObject.h"

Game::Game()
{
	objects = new Object*[SIZE_OF_OBJECTS];
}

Game::~Game()
{
	for (int i = 0 ; i <SIZE_OF_OBJECTS; i++)
	{
		delete objects[i];
	}
	delete[] objects;
}

void Game::AddObject(Object* o)
{
	if(countObject < SIZE_OF_OBJECTS){
	objects[countObject] = o;
	countObject++;
	}else
	throw "Object field is full!";
}

int* Game::FindIdOfStaticObject(double xMin, double yMin, double xMax, double yMax) const
{
	int counter = 0;
	for (int i = 0; i < countObject; i++)
	{
		if (dynamic_cast<StaticObject*>(objects[i]) != nullptr)
		{
			counter++;
		}
	}

	int* field = new int[counter];
	counter=0;
	for (int i = 0; i < countObject; i++)
	{
		if (dynamic_cast<StaticObject*>(objects[i]) != nullptr) {
			if (objects[i]->GetX() > xMin&& objects[i]->GetX() < xMax&& objects[i]->GetY() > yMin&& objects[i]->GetY() < yMax)
			{
				field[counter++] = objects[i]->GetId();
			}
		}
	}
	return field;
}

MovingObject** Game::FindMovingObjectsInArea(double x, double y, double r)
{
	int counter = 0;
	for (int i = 0; i <countObject;i++) 
		{
		MovingObject* movingObjects = dynamic_cast<MovingObject*>(objects[i]);
		if (movingObjects != nullptr) 
		{
			if(movingObjects->GetX() > x - r && movingObjects->GetX() < x + r && movingObjects->GetY() > y - r && movingObjects->GetY() < y + r)
			{
				counter++;
			}
		}
	}
	MovingObject** result = new MovingObject*[counter];
	counter = 0;
	for (int i = 0; i < countObject; i++)
	{
		MovingObject* movingObjects = dynamic_cast<MovingObject*>(objects[i]);
		if(movingObjects!=nullptr)
		{
			if (movingObjects->GetX() > x - r && movingObjects->GetX() < x + r && movingObjects->GetY() > y - r && movingObjects->GetY() < y + r)
			{
				result[counter++] = movingObjects;
			}
		}
	}
	return result;
}

MovingObject** Game::FindMovingObjectsInArea(double x, double y, double r, double uMin, double uMax)
{
	int counter = 0;
	for (int i = 0; i < countObject; i++) 
	{
		MovingObject* movingObjects = dynamic_cast<MovingObject*>(objects[i]);
		if(movingObjects!=nullptr)
		{
			if (movingObjects->GetX() > x - r && movingObjects->GetX() < x + r && movingObjects->GetY() > y - r && movingObjects->GetY() < y + r 
				&& movingObjects->GetAngleView()>uMin && movingObjects->GetAngleView()<uMax)
			{
				counter++;
			}
		}
	}
	MovingObject** result  = new MovingObject*[counter];
	counter = 0;
		for (int i = 0; i < countObject; i++)
		{
			MovingObject* movingObjects = dynamic_cast<MovingObject*>(objects[i]);
			if (movingObjects != nullptr)
			{
				if (movingObjects->GetX() > x - r && movingObjects->GetX() < x + r && movingObjects->GetY() > y - r && movingObjects->GetY() < y + r
					&& movingObjects->GetAngleView() > uMin&& movingObjects->GetAngleView() < uMax)
				{
					result[counter++] = movingObjects;
				}
			}
		}
		return result;
}
