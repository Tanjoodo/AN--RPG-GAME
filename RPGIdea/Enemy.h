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
	map_grids::Mapsnum enemyZone;

	 // drops item when he dies

public:
	Enemy(); 
	Item * dropItem();
	map_grids::Mapsnum  getZone() const { return enemyZone; };


	// deletes Item pointer
	~Enemy();

	
	virtual void operator>> (Unit & player); // used to attack player

};

