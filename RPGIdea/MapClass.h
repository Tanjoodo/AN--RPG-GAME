#ifndef MAPCLASS_H
#define MAPCLASS_H
#include "Player.h"
#include "Crackhead.h"
#include "DrugLord.h"
#include "Prostitute.h"
#include "RPGFunctions.h"
#include <vector>
using namespace std;
using namespace map_grids;

/*
* The infamous MAP CLASS
* This will basically be doing most of the stuff
* I guess it's kinda an engine
*/



class Map
{
private:
	char grid[6][20][21]; // the map 6 zones with all the size of 20x21
	Player * player = NULL; // this will be assigned to the player
	Mapsnum mapZones = ENTRANCE; // this is used to help with the grid
	vector<Enemy*> listOfEnemies;

	void createGrids(); // creates the grids for the maps
	char getMovement(); // this it used to get movements from the WINAPI.. also this is where the looping of the game will mostly happen
	void up(); // movement from the player
	void down(); // movement from the player
	void left(); // movement from the player
	void right(); // movement from the player
	void battleMode(Player & player, Enemy & enemy); // the Battle version of the code
	void displayScore(const Player &player, const Enemy &enemy); // displays the score for the battleMode
	void spawn(); // spawns the enemy
	Enemy * findEnemy(short tempY, short tempX); // finds the enemy and then prepares for battle

	bool checker(short tempY, short tempX); // this is a function used to check various parts of the map
public:
	Map();
	~Map();
	void setPlayer(Player & player); // sets the player
	void gameRun(); // makes the game run
	void printGrid(); // prints the grid
	void zoneChanger(Mapsnum mapZones, bool zoneGoingUp, short tempY, short tempX); // THE INFAMOUS ZONE CHANGER
	void gameOverScreen();



};

#endif