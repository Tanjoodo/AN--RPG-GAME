#ifndef COCAINEITEM_H
#define COCAINEITEM_H
#include "Player.h"

/*
Please understandu lel
*/

class Cocaine : public Item
{
public:
	Cocaine();
	~Cocaine();
	virtual void setDescription(string); // gets the Enemy name and sets the deScriptionm
	virtual string getDescription(); // get
	virtual void useBuff(Player &);
	
};
#endif // !COCAINEITEM_H
