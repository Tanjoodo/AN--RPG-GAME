#ifndef PLAYER_H
#define PLAYER_H
#include "UnitClass.h"
#include "Item.h"
#include <list>
using namespace std;
class Player : public Unit
{
protected:
	 // Items used for attacking
	list<Item*> itemventory;
	void useItem(int numberOfItem);
	void displayItemList();
public:
	Player(string name, int health, int attack);
	Player();
	~Player();

	void setItem(Item *);
	void setMovement(int x, int y);
	void getItem();


	virtual void operator>> (Unit &);

};



#endif // !PLAYER_H
