
#pragma once
#include "Item.h"
#ifndef BAT_H
#define BAT_H



class Bat : public Item
{
public:
	Bat(string);
	Bat();
	~Bat();
	virtual void setDescription(); // gets the Enemy name and sets the deScriptionm
	virtual string getDescription(); // get
	virtual void useBuff(Unit &);

};
#endif // !1