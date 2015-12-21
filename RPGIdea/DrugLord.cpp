#include "DrugLord.h"
#include "RPGFunctions.h"



DrugLord::DrugLord(string newName, int newHealth, int newAttack)
{
	this->name = newName;
	this->health = newHealth;
	this->attack = newAttack;
	this->attack = 60;
	this->attackperturn = 3;
	this->symbol = newName[0];
	this->role += "DrugLord";
}



DrugLord::~DrugLord()
{

}
