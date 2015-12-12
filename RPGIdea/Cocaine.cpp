#include "Cocaine.h"

Cocaine::Cocaine()
{
}

Cocaine::~Cocaine()
{
}

void Cocaine::setDescription(string name)
{

}

string Cocaine::getDescription()
{
	return string();
}

void Cocaine::useBuff(Player & unit)
{
	unit.setAttackperturn(unit.getAttackperturn() * 2);
}
