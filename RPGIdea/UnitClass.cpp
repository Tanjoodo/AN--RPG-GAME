#include "UnitClass.h"

Unit::Unit(std::string newName, int newHealth, int newMana, int newArmor)
{
	this->name = newName;
	this->health = newHealth;

}

Unit::Unit()
{
}

Unit::~Unit()
{
}
