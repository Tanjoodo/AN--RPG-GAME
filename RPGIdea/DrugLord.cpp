#include "DrugLord.h"
#include "RPGFunctions.h"



DrugLord::DrugLord(string newName, int newHealth, int newAttack,  map_grids::Mapsnum zone)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack;
	this->enemyZone = zone;
	this->attack = 3;
	this->symbol = newName[0];
}

DrugLord::DrugLord(string Name)
{
	//enemyItem = new Cocaine(this->getName());
}

DrugLord::~DrugLord()
{

}
