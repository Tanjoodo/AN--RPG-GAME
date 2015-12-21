
#pragma once
#include "Item.h"
#ifndef BAT_H
#define BAT_H

/*
* This class is used the Prostitute class to hold when she died
* and the Player class to hold and use
*
*/

class Bat : public Item
{
public:
	Bat(string enemyName);
	Bat();
	~Bat();
	virtual void setDescription(); // gets the Enemy name and sets the deScriptionm
	virtual string getDescription(); // get description with the reason of the bat
	virtual void useBuff(Unit &); // applys +20 damage;

};
#endif // !1