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
	char symbol;

public:
	Unit(string,int,int); // Unit class optional
	Unit(); // string
	~Unit(); //
	short getHealth() const { return health; };
	string getName() const { return name; };
	short getAttackperturn() const { return attackperturn; };
	short getX() const { return x; };
	short getY() const { return y; };
	char getSymbol() const { return symbol; };


	void setName(string);
	void setAttackperturn(short);
	void setHealth(short);
	void setX(short);
	void setY(short);
	void setSymbol(char newSymbol);

//	virtual void attack() = 0; // don't know the use yet
};

#endif // !1

