#include "Prostitute.h"



Prostitute::Prostitute(string newName, int newHealth, int newAttack)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack+20;

	this->enemyItem = new Bat(newName);

	this->attackperturn = 1;
}

Prostitute::~Prostitute()
{
}
