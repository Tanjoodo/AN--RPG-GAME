#include "Crackhead.h"
#include "Cocaine.h"



CrackHead::CrackHead(string newName, int newHealth, int newAttack)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack;
	this->enemyItem = new Cocaine(newName);
	this->symbol = newName[0];
	this->attackperturn = 2;
	this->role += "CrackHead";
}

CrackHead::~CrackHead()
{
}
