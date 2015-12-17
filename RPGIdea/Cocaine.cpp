#include "Cocaine.h"
using namespace std;

Cocaine::Cocaine(string name) : Item(name)
{
	this->setDescription();
	this->name.append("'s cocopuffs");
}

Cocaine::Cocaine()
{
	name = "Shroom";
}

Cocaine::~Cocaine()
{

}

void Cocaine::setDescription()
{
	description.append("This item was used to help ");
	description += this->name;
	description.append(" with his.. certain.. issues");
}

string Cocaine::getDescription()
{
	return this->description;
}

void Cocaine::useBuff(Unit & unit)
{
	unit.setAttackperturn(unit.getAttackperturn() * 2);
}


