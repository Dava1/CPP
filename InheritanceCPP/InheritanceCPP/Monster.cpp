#include "Monster.h"

Monster::Monster(int hp, int maxhp,double angleView):MovingObject(angleView)
{
	this->hp = hp;
	this->maxHp = maxhp;
}

Monster::~Monster()
{
}

void Monster::SetHp(int hp) 
{
	this->hp=hp;
}

void Monster::SetMaxHp(int maxHp)
{
	this->maxHp = maxHp;
}

int Monster::GetHp() const
{
	return hp;
}

int Monster::GetMaxHp() const
{
	return maxHp;
}
