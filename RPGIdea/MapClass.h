#ifndef MAPCLASS_H
#define MAPCLASS_H
#include "Player.h"
#include "RPGFunctions.h"
using namespace std;
using namespace map_grids;
/*
* The infamous MAP CLASS
* This will basically be doing most of the stuff
* 
*/

class Map
{
private:
	static char grid[6][20][21];
	Player * player = NULL;
	Mapsnum mapZones = ENTRANCE;
	void createGrids();
	char getMovement();
	void gameRun();
	void up();
	void down();
	void left();
	void right();
	

	bool ifZONESCHANGED = false;
	void checker(short,short);
public:
	Map();
	~Map();

	void printGrid();
	void zoneChanger(Mapsnum, bool, short, short); // questionable but big




};

#endif