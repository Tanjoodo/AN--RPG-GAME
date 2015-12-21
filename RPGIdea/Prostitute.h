#pragma once
#include "Enemy.h"
#include "Bat.h"

/*
* The Prostitute Class
* This class is a subclass of enemy and enemy is a subclass of unit
* This class is different because it drops the bat Item on the dropItem();
*/



class Prostitute : public Enemy
{
public:
	Prostitute(string newName, int newHealth, int newAttack);
	~Prostitute();
	

};
