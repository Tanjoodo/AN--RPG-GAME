#ifndef PLAYER_H
#define PLAYER_H
#include "UnitClass.h"
#include "Item.h"
class Player : public Unit
{
protected:
	Item * item = nullptr;

public:
	Player(string, int, int);
	Player();
	~Player();

	void setItem(Item *);
	void useItem();
	void setMovement(int x, int y);

};



#endif // !PLAYER_H
