
#include "Object.h"

enum TypeOfBarriers {Rock,LittlePlant,BigPlant};

class StaticObject : public Object {
public:
	StaticObject(int id, TypeOfBarriers TypeOfBarrieres);
	~StaticObject();
	TypeOfBarriers GetTypeOfBarriers() const;

private:
	TypeOfBarriers typeOfBarriers;
};
