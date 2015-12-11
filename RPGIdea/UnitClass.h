#pragma once
#ifndef UNIT_H
#define UNIT_H
#include <string>

class Unit
{
protected:
	short health;
	short attackperturn;
	std::string name;

public:
	Unit(std::string,int,int,int);
	Unit();
	~Unit();
	short getHealth() const { return health; };
	std::string getName() const { return name; };
	short getAttackperturn() const { return attackperturn; };

	virtual void attack() = 0;
};

#endif // !1

