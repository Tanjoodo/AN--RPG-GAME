#include "Crackhead.h"
#include "Cocaine.h"

CrackHead::CrackHead(string Name)
{
	enemyItem = new Cocaine(this->getName());
}

CrackHead::CrackHead(string newName, int newHealth, int newAttack)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack;

	this->enemyItem = new Cocaine(newName);
	
	this->attackperturn = 2;
}

CrackHead::~CrackHead()
{
}
