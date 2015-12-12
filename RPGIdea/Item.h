#ifndef ITEM_H
#define ITEM_H
#include <string>
#include "Player.h"
using namespace std;

/*
Abstract class for the Item class
three pure virtual functions that the other Item classes will utlize


*/

class Item
{
private:
	string name; // the name of the item
	string description; // the name of the description

public:
	Item(); // // default constructor
	Item(string); // an construtor with a name
	~Item(); // 

	void setName(string); // setters
	string getName(); // get the name

	// Virtual Functions that are used for the subclasses
	virtual void setDescription(string) = 0;
	virtual string getDescription() = 0;
	virtual void useBuff(Unit &) = 0;
};



#endif // !1
