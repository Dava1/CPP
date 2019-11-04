#ifndef _MOSTER_H
#define _NOSTER_H
#pragma once
#include "MovingObject.h"

class Monster : public MovingObject {
public:
	Monster(int hp, int maxhp,double angleView,int id);
	~Monster();
	void SetHp(int hp);
	void SetMaxHp(int maxHp);
	int GetHp()const;
	int GetMaxHp()const;
private:
	int hp, maxHp;
};
#endif // !_MOSTER_H