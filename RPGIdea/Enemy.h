#pragma once
#include "UnitClass.h"
#include "Item.h"
#include "RPGFunctions.h"


/*
*The Sub class from unit
* The parent class used for Prostitute, Crackhead, and DrugLoad
* The class have a function everyone will use
* which is operator>> which is just and attack function
* Then they all drop an item when they die
*
*/

class Enemy : public Unit
{
protected:
	Item * enemyItem; // items that will die
	map_grids::Mapsnum enemyZone; // used for the findEnemy() on the main class helps find the enemy's coordinates
	string role; // the role of the enemy

public:
	Enemy(); 
	Item * dropItem();
	void setArea(map_grids::Mapsnum newZone, short tempY, short tempX); // used to set the area for the enemy class
	map_grids::Mapsnum  getZone() const { return enemyZone; }; // used to get the zones from the enemy class
	string getRole() const { return role; }; // gets the roles


	// deletes Item pointer
	~Enemy();

	
	virtual void operator>> (Unit & player); // used to attack player

};

