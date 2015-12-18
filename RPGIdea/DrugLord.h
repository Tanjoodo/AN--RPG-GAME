
#ifndef DRUGLORD_H
#define DRUGLORD_H
#include "Enemy.h"

class DrugLord : public Enemy
{
public:
	DrugLord(string newName, int newHealth, int newAttack, map_grids::Mapsnum zone);
	DrugLord(string Name);
	~DrugLord();

private:

};




#endif // !DRUGLORD_H
