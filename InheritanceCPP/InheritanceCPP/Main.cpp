
#include "Object.h"
#include "StaticObject.h"
#include "MovingObject.h"
#include <iostream>
#include "Game.h"
using namespace std;

int main(int argc, char** argv) {
	Object* object = new StaticObject{ 1, TypeOfBarriers::LittlePlant};
	StaticObject* so = dynamic_cast<StaticObject*>(object);
	Object* monstrum = new MovingObject{ 2,3.0 };
	Object* animal = new MovingObject{ 5,3.0 };
	Object* rock = new StaticObject{ 3,TypeOfBarriers::Rock };
	Object* plant = new StaticObject{ 4,TypeOfBarriers::BigPlant };
	Game* game = new Game();
	game->AddObject(object);
	game->AddObject(monstrum);
	game->AddObject(animal);
	game->AddObject(rock);
	game->AddObject(plant);
	game->AddObject(object);
	game->AddObject(object);
	
	
	game->FindIdOfStaticObject(0,0,100,100);
	for (int i = 0; i < 5; i++) 
	{
		cout << *game->FindIdOfStaticObject(0,0,100,100)<< endl;
	}
	game->FindMovingObjectsInArea(10, 10, 100);
	if (so != nullptr)
	{
		cout<< "Object is static" << so->GetTypeOfBarriers()<<endl;
	}
};