#ifndef PLAYER_H
#define PLAYER_H
#include "UnitClass.h"
#include "Item.h"
#include <list>
using namespace std;
class Player : public Unit
{
protected:
	Item * item = nullptr; // Items used for attacking
	list<Item*> itemventory;


public:
	Player(string, int, int);
	Player();
	~Player();

	void setItem(Item *);
	void useItem();
	void setMovement(int x, int y);

	virtual void operator>> (Unit &);

};



#endif // !PLAYER_H
