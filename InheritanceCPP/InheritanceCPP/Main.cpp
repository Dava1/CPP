
#include "Object.h"
#include "StaticObject.h"
#include "MovingObject.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	Object* object = new StaticObject{ 1, TypeOfBarriers::LittlePlant};
	StaticObject* so = dynamic_cast<StaticObject*>(object);
	if (so != nullptr)
	{
		cout<< "Object is static" << so->GetTypeOfBarriers();
	}
};