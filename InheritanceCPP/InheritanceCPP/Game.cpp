#include "Game.h"

Game::Game()
{
	objects = &objects[sizeObjects];
}

Game::~Game()
{
	delete objects;
}

void Game::AddObject(Object* o)
{
	objects[countObject] = o;
}

int* Game::findIdOfStaticObject(double xMin, double yMin, double xMax, double yMax)
{
	int* field = new int[countObject];
	for (int i = 0; i < countObject; i++)
	{
		if (objects[i]->GetX() > xMin&& objects[i]->GetX() < xMax && objects[i]->GetY() > yMin&& objects[i]->GetY() < yMax)
		{
			field[i] = objects[i]->GetId();
		}
	}
	return field;
}
MovingObject** Game::findMovingObjectsInArea(double x, double y, double r, double uMin, double uMax)
{
	MovingObject** result {};
		for (int i = 0; i < countObject; i++)
		{
			if (objects[i]->GetX() == x && objects[i]->GetY() == y && objects[i]->GetX() <= r && objects[i]->GetY() <= r)
			{
				if (dynamic_cast<MovingObject*>(objects[i])->GetAngleView() >= uMin && dynamic_cast<MovingObject*>(objects[i])->GetAngleView() < uMax)
				{
					result[i] = (MovingObject*)objects[i];
				}
			}
		}
		return result;
}
