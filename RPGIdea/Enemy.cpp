#include "Enemy.h"

Item * Enemy::dropItem()
{
	return enemyItem;
}

void Enemy::setArea(map_grids::Mapsnum newZone, short tempY, short tempX)
{
	this->enemyZone = newZone;
	this->x = tempX;
	this->y = tempY;
}

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
	delete enemyItem;
}

void Enemy::operator>>(Unit & player)
{
	player.setHealth(player.getHealth() - this->attack);
}
