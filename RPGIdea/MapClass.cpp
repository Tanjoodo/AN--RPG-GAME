#include "MapClass.h"
#include <windows.h>
#include <iostream>
using namespace std;


// X IS --------------
// Y IS DOWN


void Map::checker(short tempY, short tempX)
{
	if (grid[mapZones][tempY][tempX] == '/')
	{
		
	}
	



}

Map::Map()
{
	this->createGrids(); // creates grid
}

Map::~Map()
{

}

void Map::printGrid()
{
	for (int i = 0; i<20; i++)
	{
		for (int j = 0; j<21; j++)
		{
			wcout << grid[mapZones][i][j];
		}
		wcout << endl;
	}
}

void Map::zoneChanger(Mapsnum cMap, bool zoneGoingUp, short tempY, short tempX)
{
	if (zoneGoingUp)
	{
		switch (cMap) // if they're going up
		{
		case map_grids::ENTRANCE: 
			mapZones = LIVING_ROOM; 
			player->setMovement(6, 16); // sends to the house entrance

			break;
		case map_grids::LIVING_ROOM: //
			if (tempY == 6 && tempX == 8)
			{
				mapZones = BATHROOM; // 
				player->setMovement(13, 7);
			}
			else if (tempY == 3 && tempX == 4)
			{
				mapZones = KITCHEN;
				player->setMovement(4, 8);
			}
			break;
		case map_grids::BATHROOM:
			break; // no "/"		
		case map_grids::KITCHEN:
			if (tempY == 4 && tempX == 4) {
				mapZones = RIGHTROOM;
				player->setMovement(19, 8);
			}
			else if (tempY == 4 && tempX == 7)
			{
				mapZones = LEFTROOM;
				player->setMovement(4, 9);
			}
			break;
		case map_grids::RIGHTROOM:
			break;
		case map_grids::LEFTROOM:
			break;
		}
	}
	else
	{
		switch (cMap) // if they're going down a level
		{
		case map_grids::ENTRANCE:  // it's going no where
			break;
		case map_grids::LIVING_ROOM: // 
			mapZones = ENTRANCE;
			player->setMovement(8, 4);
			break;
		case map_grids::BATHROOM:
			mapZones = LIVING_ROOM;
			player->setMovement(9, 5);
			break;
		case map_grids::KITCHEN:
			mapZones = LIVING_ROOM;
			player->setMovement(9,2);
			break;
		case map_grids::RIGHTROOM:
			mapZones = KITCHEN;
			player->setMovement(5,4);
			break;
		case map_grids::LEFTROOM:
			mapZones = KITCHEN;
			player->setMovement(6, 4);
			break;
		}
	}

}



char Map::getMovement()
{
	char key;
	while (true)
	{
		for (key = 8; key <= 222; ++key)
		{
			if (GetAsyncKeyState(key) == -32767)
			{
				switch (key)
				{
				case '&': return 'U'; break;
				case '(': return 'D'; break;
				case '%': return 'L'; break;
				case '\'': return 'R'; break;
				default:
					break;
				}
			}
		}
	}
}

void Map::gameRun() 
{
	//pray
	do {
		this->printGrid();

		switch (this->getMovement())
		{
		case'U': up(); break;
		case 'D': down(); break;
		case 'L': left(); break;
		case 'R': right(); break;
		default:
			break;
		}

	} while (true);
}

void Map::up()
{
	short prevX = player->getX();
	short prevY = player->getY();

	if (grid[mapZones][prevY - 1][prevX] != ' ')
	{
		player->setY(prevY - 1);
		grid[mapZones][prevY][prevX] = ' ';
	}

}

void Map::down()
{
	int prevX = player->getX();
	int prevY = player->getY();


	if (grid[mapZones][prevY - 1][prevX] != ' ')
	{
		player->setY(prevY - 1);
		grid[mapZones][prevY][prevX] = ' ';
	}

}

void Map::left()
{
	int prevX = player->getX();
	int prevY = player->getY();


	if (grid[mapZones][prevY - 1][prevX] != ' ')
	{
		player->setY(prevY - 1);
		grid[mapZones][prevY][prevX] = ' ';
	}

}

void Map::right()
{
	int prevX = player->getX();
	int prevY = player->getY();


	if (grid[mapZones][prevY - 1][prevX] != ' ')
	{
		player->setY(prevY - 1);
		grid[mapZones][prevY][prevX] = ' ';
	}

}



void Map::createGrids()
{
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 21; j++)
			grid[0][i][j] = map_grids::entrance[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[1][i][j] = map_grids::bathroom[i][j];


	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[2][i][j] = map_grids::bossroom[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[3][i][j] = map_grids::kitchen[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[4][i][j] = map_grids::livingroom[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[5][i][j] = map_grids::rightroom[i][j];
}



