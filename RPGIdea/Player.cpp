#include "Player.h"
#include <windows.h>

Player::Player(string newName, int newHealth, int newAttack) : Unit(newName, newHealth, newAttack)
{

}

Player::Player() 
{
	this->name = "PLAYERNAME";
	this->health = 50;
	this->attack = 2;
}

Player::~Player()
{
}

void Player::setItem(Item * newItem)
{
	item = newItem;
}

void Player::useItem()
{
	this->item->useBuff(*this);
}

void Player::setMovement(int x, int y)
{
	this->x = x;
	this->y = y;
}

