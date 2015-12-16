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
	short getAttack() const { return attack; };
	char getSymbol() const { return symbol; };
	bool isDead();

	virtual void operator>> (Unit &) = 0;

	void setAttack(short newAttack);
	void setName(string name);
	void setAttackperturn(short newAttackPerTurn);
	void setHealth(short hp);
	void setX(short x);
	void setY(short y);
	void setSymbol(char newSymbol);
	
};

#endif

