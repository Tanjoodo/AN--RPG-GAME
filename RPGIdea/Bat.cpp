#include "Bat.h"

Bat::Bat(string enemyName) : Item(enemyName)
{
	this->setDescription();
	this->name.append("'s bat");
}

Bat::Bat()
{
}

Bat::~Bat()
{

}

void Bat::setDescription()
{
	description.append("This item was used to help ");
	description += this->name;
	description.append(" when people weren't paying");
}

string Bat::getDescription()
{
	return description;
}

void Bat::useBuff(Unit & player)
{
	player.setAttack(player.getAttack() + 20);
}
