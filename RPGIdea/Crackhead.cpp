#include "Crackhead.h"
#include "Cocaine.h"

CrackHead::CrackHead(string Name)
{
	enemyItem = new Cocaine(this->getName());
}

CrackHead::CrackHead(string newName, int newHealth, int newAttack, map_grids::Mapsnum zone)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack;
	this->enemyZone = zone;
	this->enemyItem = new Cocaine(newName);
	this->symbol = newName[0];
	this->attackperturn = 2;
}

CrackHead::~CrackHead()
{
}
