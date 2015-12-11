#ifndef PLAYER_H
#define PLAYER_H
#include "UnitClass.h"

class Player : public Unit
{
protected:
	short int level;

public:
	Player();
	~Player();
};



#endif // !PLAYER_H
