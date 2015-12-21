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
	list<Item*> itemventory; // the Item inventory list the player will have whenever he needs to get a new weapon
	void useItem(int numberOfItem); // use item gives the player the item he needs to you
	void displayItemList(); // displays the Item player list, if there's not, then is prints "THERE IS NONE SIRE"
public:
	Player(string name, int health, int attack); // constructors for the player
	Player(); 
	~Player();

	void setItem(Item *); // this is where the enemy's Dropitem() goes into play, it will obtain and item and pass to the itemventory, pushing it back (push_back())
	void setMovement(int x, int y); // an easier to set movements instead of doing setY and setX
	void getItem(); // this is the fusion of displayItemList() and useItem(), this is where it will be called when the battleMode starts

	virtual void operator>> (Unit &); // attacks a Unit, but attacks any Unit

};



#endif // !PLAYER_H
