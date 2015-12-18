#ifndef CRACKHEAD_H
#define CRACKHEAD_H

#include "Enemy.h"
#include "Cocaine.h"

class CrackHead : public Enemy
{
public:
	CrackHead(string newName, int newHealth, int newAttack, map_grids::Mapsnum zone);
	CrackHead(string Name);
	~CrackHead();

private:

};


#endif // !CRACKHEAD_H

