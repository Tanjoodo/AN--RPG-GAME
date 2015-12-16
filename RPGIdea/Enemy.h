#pragma once
#include "UnitClass.h"
#include "Item.h"

class Enemy : public Unit
{
protected:
	Item * enemyItem = nullptr; // items that will die
	Item * dropItem(); // drops item when he dies
public:
	Enemy();
	~Enemy();

	
	virtual void operator>> (Unit & player); // used to attack player

};

