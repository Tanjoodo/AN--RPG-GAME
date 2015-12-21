#ifndef CRACKHEAD_H
#define CRACKHEAD_H

#include "Enemy.h"
#include "Cocaine.h"
/*
* The Crackhead class
* It's a sub class of enemy and enemy is the subclass of unit
* this class is what drops the cocaine item on the dropItem();
*/


class CrackHead : public Enemy
{
public:
	CrackHead(string newName, int newHealth, int newAttack); // constructor for the crackhead
	~CrackHead();
};


#endif // !CRACKHEAD_H

