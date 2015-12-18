#pragma once
#include "Enemy.h"
#include "Bat.h"

class Prostitute : public Enemy
{
public:
	Prostitute(string newName, int newHealth, int newAttack, map_grids::Mapsnum zone);
	~Prostitute();
	

};
