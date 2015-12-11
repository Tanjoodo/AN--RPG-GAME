#ifndef ITEM_H
#define ITEM_H
#include <string>
#include "UnitClass.h"
using namespace std;
class Item
{
private:
	string name;
	string Description;

public:
	Item();
	Item(string, string);
	~Item();


	void setName();
	void setDescription();
	string getName();
	string getDescription();

	virtual void useBuff(Unit) = 0;






};



#endif // !1
