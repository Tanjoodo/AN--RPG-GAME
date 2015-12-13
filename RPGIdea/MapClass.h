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
	char grid[6][20][21];
	Player * player = NULL;
	Mapsnum mapZones = ENTRANCE;
	void createGrids();
	char getMovement();
	void up();
	void down();
	void left();
	void right();
	
	bool checker(short tempY, short tempX);
public:
	Map();
	~Map();
	void setPlayer(Player & player);
	void gameRun();
	void printGrid();
	void zoneChanger(Mapsnum mapZones, bool zoneGoingUp, short tempY, short tempX); // questionable but big




};

#endif