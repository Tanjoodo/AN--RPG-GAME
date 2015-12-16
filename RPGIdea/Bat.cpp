#include "Bat.h"

Bat::Bat(string)
{
}

Bat::Bat()
{
}

Bat::~Bat()
{
}

void Bat::setDescription()
{
}

string Bat::getDescription()
{
	return string();
}

void Bat::useBuff(Unit & player)
{
	player.setAttack(player.getAttack() + 20);
}
