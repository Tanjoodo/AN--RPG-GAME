#pragma once
#ifndef UNIT_H
#define UNIT_H
#include <string>
using namespace std;
class Unit
{
protected:
	short health = NULL; // hp everyone will have
	short attackperturn = NULL; // attackperturn
	short attack = NULL; // attack
	short x = NULL; // x
	short y = NULL; // x
	string name;

public:
	Unit(string,int,int); // Unit class optional
	Unit(); // string
	~Unit(); //
	short getHealth() const { return health; };
	string getName() const { return name; };
	short getAttackperturn() const { return attackperturn; };
	short getX() const { return x; };
	short getY() const { return y; };

	void setName(string);
	void setAttackperturn(short);
	void setHealth(short);
	void setX(short);
	void setY(short);

//	virtual void attack() = 0; // don't know the use yet
};

#endif // !1

