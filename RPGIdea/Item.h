
#include "UnitClass.h"
#include <string>
#include "RPGFunctions.h"
using namespace std;

/*
Abstract class for the Item class
three pure virtual functions that the other Item classes will utlize


*/
#ifndef ITEM_H
#define ITEM_H


class Item
{
protected:
	string name; // the name of the item
	string description; // the name of the description
	map_grids::Mapsnum itemZone;
	short x; // it needs coordinates X for findItem() func on the map class
	short y; // it need coordiantes Y for findItem() func on the map class

public:
	Item(); // // default constructor
	Item(string); // an construtor with a name
	~Item(); // 

	void setName(string); // setters
	void setZone(map_grids::Mapsnum);
	void setX(short newX);
	void setY(short newY);
	

	string getName() const { return name; }; // get the name
	map_grids::Mapsnum getZone() const { return itemZone; };
	short getX() const { return x; };
	short getY() const { return y; };

	// Virtual Functions that are used for the subclasses
	virtual void setDescription() = 0; // function that sets the description
	virtual string getDescription() = 0; // gets the Descriptions
	virtual void useBuff(Unit &) = 0; // THIS IS THE IMPORTANT PART this is what adds the differences from each item, as it provides a buff to the player
};

#endif //ITEM_H

