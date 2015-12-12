#include "UnitClass.h"

Unit::Unit(std::string newName, int newHealth, int newAttack)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack;
}

Unit::Unit()
{
	this->name = "UNITNAME";
	this->health = 50;
	this->attack = 2;
}

Unit::~Unit()
{
}

void Unit::setName(string newName)
{
	this->name = newName;
}

void Unit::setAttackperturn(short amount)
{
	this->attackperturn = amount;
}

void Unit::setHealth(short newHp)
{
	this->health = newHp;
}

void Unit::setX(short x)
{
	this->x = x;
}

void Unit::setY(short y)
{
	this->y = y;
}
