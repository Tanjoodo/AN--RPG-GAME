#include "Prostitute.h"



Prostitute::Prostitute(string newName, int newHealth, int newAttack, map_grids::Mapsnum zone)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack+20;
	this->enemyZone = zone;
	this->enemyItem = new Bat(newName);
	this->symbol = newName[0];
	this->attackperturn = 1;
}

Prostitute::~Prostitute()
{
}
