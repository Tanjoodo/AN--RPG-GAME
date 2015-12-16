#include "Enemy.h"

Item * Enemy::dropItem()
{
	return enemyItem;
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
