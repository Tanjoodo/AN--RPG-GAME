#include "Item.h"

Item::Item()
{
	// has no meaning
}

Item::Item(string newName)
{
	this->name = newName;
}

Item::~Item()
{
	// has no meaning
}

void Item::setName(string newName)
{
	this->name = newName;
}

void Item::setZone(map_grids::Mapsnum newZone)
{
	this->itemZone = newZone;
}

void Item::setX(short newX)
{
	x = newX;
}

void Item::setY(short newY)
{
	y = newY;
}



