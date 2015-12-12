#include "Item.h"

Item::Item()
{
}

Item::Item(string newName)
{
	this->name = newName;
}

Item::~Item()
{
}

void Item::setName(string newName)
{
	this->name = newName;
}

string Item::getName()
{
	return name;
}

