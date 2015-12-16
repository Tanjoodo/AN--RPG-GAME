#ifndef COCAINEITEM_H
#define COCAINEITEM_H
#include "Player.h"

/*
Please understandu lel
*/

class Cocaine : public Item
{
public:
	Cocaine(string);
	Cocaine();
	~Cocaine();
	virtual void setDescription(); // gets the Enemy name and sets the deScriptionm
	virtual string getDescription(); // get
	virtual void useBuff(Unit &);
	
};
#endif // !COCAINEITEM_H
