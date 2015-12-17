
#include "UnitClass.h"
#include <string>
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

public:
	Item(); // // default constructor
	Item(string); // an construtor with a name
	~Item(); // 

	void setName(string); // setters
	string getName(); // get the name

	// Virtual Functions that are used for the subclasses
	virtual void setDescription() = 0;
	virtual string getDescription() = 0;
	virtual void useBuff(Unit &) = 0;
};

#endif //ITEM_H

