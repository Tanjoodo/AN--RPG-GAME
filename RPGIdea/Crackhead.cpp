#include "Crackhead.h"
#include "Cocaine.h"

CrackHead::CrackHead(string Name)
{
	enemyItem = new Cocaine(this->getName());
}
