
#ifndef DRUGLORD_H
#define DRUGLORD_H
#include "Enemy.h"

/*
* The DrugLord class, this class is the boss of the game
* The class is the subclass of the enemy class and enemy is the subclass of the other one
* this class holds... not sure yet
*/

class DrugLord : public Enemy
{
public:
	DrugLord(string newName, int newHealth, int newAttack);
	~DrugLord();

private:

};

#endif // !DRUGLORD_H
