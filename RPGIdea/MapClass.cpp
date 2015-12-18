#include "MapClass.h"
#include <windows.h>
#include <iostream>
using namespace std;


// X IS --------------
// Y IS DOWN

char entrance[20][21] =
{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , 'T' , 'R' , 'A' , 'P' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , 'H' , 'o' , 'u' , 's' , 'e' , '?' , '?' , '?' , '?' , '@' , '@' , '?' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '/' , '#' , '?' , '?' , '?' , '?' , '?' , '?' , ' ' , ' ' , '?' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , ' ' , ' ' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '~' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' } };


char livingroom[20][21] =
{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' , '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '/' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , 'B' , 'a' , 't' , 'h' , ' ' , ' ' , '/' , ' ' , ' ' , '?' , ' ' , 'K' , 'i' , 't' , 'c' , 'h' , 'e' , 'n' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , ' ' , ' ' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , ' ' , ' ' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
,{ '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
,{ '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
,{ '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
,{ '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
,{ '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '\\' , '?' , '?' , '?' , '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' } };


char bathroom[20][21]
{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , '>' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , '>' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '\\' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , '?' , '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '?' , '?' , '?' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' } };


char kitchen[20][21] =
{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , '/' , '#' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '/' , ' ' , ' ' , '/' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '\\' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' } };


char bossroom[20][21] =

{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '\\' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' } };


char rightroom[20][21]
{ { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '\\' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , '?' }
,{ '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' , '?' } };





Map::Map()
{
	this->createGrids(); // creates grid
}

Map::~Map()
{

}

void Map::setPlayer(Player & player)
{
	this->player = &player;
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

/*
**********************************************************************                                            
* zoneChanger function, the function that changes zones              *                                              
* Probably my worst idea of how the zones should move                *
* since I'm not really "loading" maps, they're already preloaded     *
* this function makes everything run perfectly, and I'll explain it  ****************
*                                                                                   *
* Basically it changes the grid[mapZone] and also changes the position of the player*
*************************************************************************************/


void Map::zoneChanger(Mapsnum cMap, bool zoneGoingUp, short tempY, short tempX)
{
	if (zoneGoingUp) // going up determines if we're changing zones to the next level so for example ENTRANCE TO LIVING ROOM
	{
		switch (cMap) // checks which Mapsnum we're going too
		{
		case map_grids::ENTRANCE:  // if it's entrance
			mapZones = LIVING_ROOM; // we're changing zones to living_room
			player->setMovement(6, 16); // sends to the house entrance
			grid[mapZones][16][6] = player->getSymbol(); // puts that symbol in the mapZone
			break;
		case map_grids::LIVING_ROOM: // this one is tricky because there's two zones we're changing into
			if (tempY == 5 && tempX == 8) // BATHROOM
			{
				mapZones = BATHROOM; // changes zones into Bathroom
				player->setMovement(12, 7); // sets the coordian player will be at
				grid[mapZones][7][12] = player->getSymbol(); // puts his symbol there
			}
			else if (tempY == 2 && tempX == 11) // KITCEH 
			{
				mapZones = KITCHEN;
				player->setMovement(5, 8);
				grid[mapZones][8][5] = player->getSymbol();
			}
			break;
		case map_grids::BATHROOM:
			break; // no "/"		
		case map_grids::KITCHEN:
			if (tempY == 4 && tempX == 4) {
				mapZones = RIGHTROOM;
				player->setMovement(18, 8);
				grid[mapZones][8][18] = player->getSymbol();
			}
			else if (tempY == 4 && tempX == 7)
			{
				mapZones = LEFTROOM;
				player->setMovement(5, 10);
				grid[mapZones][10][5] = player->getSymbol();
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
		case map_grids::ENTRANCE:  // it's going no where will change later on
			break;
		case map_grids::LIVING_ROOM: // 
			mapZones = ENTRANCE;
			player->setMovement(9, 5);
			grid[mapZones][5][9] = player->getSymbol();
			break;
		case map_grids::BATHROOM:
			mapZones = LIVING_ROOM;
			player->setMovement(9, 5);
			grid[mapZones][5][9] = player->getSymbol();
			break;
		case map_grids::KITCHEN:
			mapZones = LIVING_ROOM;
			player->setMovement(10,2);
			grid[mapZones][2][10] = player->getSymbol();
			break;
		case map_grids::RIGHTROOM:
			mapZones = KITCHEN;
			player->setMovement(5,4);
			grid[mapZones][4][5] = player->getSymbol();
			break;
		case map_grids::LEFTROOM:
			mapZones = KITCHEN;
			player->setMovement(6, 4);
			grid[mapZones][4][6] = player->getSymbol();
			break;
		}
	}

}

void Map::gameOverScreen()
{
	system("cls");
	cout << "\n\n\n\n\t\t\t YOU LOST \n\t\t\t and I won't even save for you LOL \n\n\n\n";
	system("pause");

	exit(-1);
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
	spawn();
	mapZones = ENTRANCE; // sets the entrance
	player->setMovement(8,18); // players are at the entrance
	grid[mapZones][18][8] = player->getSymbol(); // sets the symbole
	do {
		system("cls"); // clears screenm
		this->printGrid(); // prints the screen

		switch (this->getMovement()) // gets the movements
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
	short prevX = player->getX(); // prevX these will check for evereything
	short prevY = player->getY(); // prevY these will check foreverything 
	Mapsnum tempZone = mapZones;
	

	if (!checker(prevY - 1, prevX)) 
	{
		grid[tempZone][prevY][prevX] = ' ';
	}
}

void Map::down()
{
	short prevX = player->getX();
	short prevY = player->getY();
	Mapsnum tempZone = mapZones;

	if(!checker(prevY + 1, prevX))
	{
		grid[tempZone][prevY][prevX] = ' ';
	}

	
}

void Map::left()
{
	short prevX = player->getX();
	short prevY = player->getY();
	Mapsnum tempZone = mapZones;
	
	//grid[tempZone][prevY][prevX] = ' ';
	if(!checker(prevY, prevX -1))
	{
		grid[tempZone][prevY][prevX] = ' ';
	}

	

}

void Map::right()
{
	short prevX = player->getX();
	short prevY = player->getY();
	Mapsnum tempZone = mapZones;
	
	
	if(!checker(prevY, prevX+1))
	{
		grid[tempZone][prevY][prevX] = ' ';
	}

//	grid[tempZone][prevY][prevX] = ' ';

}

void Map::battleMode(Player & player, Enemy & enemy)
{
	bool enemyTurn = true, playerTurn = true;
	int choice = NULL;

	short tempHP = player.getHealth();
	short tempATP = player.getAttackperturn();

	do
	{
		system("cls");
		printGrid();
		displayScore(player, enemy);
		if (playerTurn && !player.isDead())
		{
			cout << "\nIt's player turn, what do you want to do?" << endl
				<< "1. attack 2. item choices 3. skip " << endl
				<< "choice: ";
			cin >> choice; cin.ignore(80, '\n');
			switch (choice)
			{
			case 1:
			{
				for (int i = 0; i < player.getAttackperturn(); i++)
				{
					player >> enemy;
					cout << "\n" << player.getName() << " deals " << player.getAttack() << " to " << enemy.getName();
					cin.get();
				}
				playerTurn = false;
				enemyTurn = true;
				break;
			}
			case 2:
				player.getItem(); break;
			case 3:
				cout << player.getName() << " skipped the round" << endl;
				cin.get();
				playerTurn = false;
				enemyTurn = true;
			default:
				break;
			}
		}

		if (enemyTurn && !enemy.isDead())
		{
			for (int i = 0; i < enemy.getAttackperturn(); i++)
			{
				enemy >> player;
				cout << enemy.getName() << " deals " << enemy.getAttack() << " to " << player.getName();
				cin.get();
			}
			enemyTurn = false;
			playerTurn = true;
		}



	} while (!player.isDead() && !enemy.isDead());


	if (!player.isDead())
	{
		cout
			<< player.getName() << " has won!" << endl
			<< "you obtain " << enemy.dropItem()->getName() << "!" << endl
			<< "Description " << enemy.dropItem()->getDescription() << endl;

		player.setItem(enemy.dropItem());
		player.setHealth(tempHP);
		player.setAttackperturn(tempATP);
	}

	else if (!enemy.isDead()) {
		gameOverScreen();
	}
	cin.get();
	
}

void Map::displayScore(const Player & player, const Enemy & enemy)
{
	cout << "\t\t SCORES " << endl
		<< player.getName() << "'s health is " << player.getHealth() << "\t\t" << enemy.getName() << "'s health is " << enemy.getHealth() << endl
		<< player.getName() << "'s attack is " << player.getAttack() << "\t\t" << enemy.getName() << "'s attack is " << enemy.getAttack() << endl
		<< player.getName() << "'s APT is " << player.getAttackperturn() << "   \t\t" << enemy.getName() << "'s ATP is " << enemy.getAttackperturn() << endl;
}

void Map::spawn()
{
	listOfEnemies.push_back(new CrackHead("Johnny", 300, 30, LIVING_ROOM));
	listOfEnemies[0]->setX(7);
	listOfEnemies[0]->setY(14);
	grid[listOfEnemies[0]->getZone()][listOfEnemies[0]->getY()][listOfEnemies[0]->getX()] = listOfEnemies[0]->getSymbol();


	listOfEnemies.push_back(new Prostitute("Johnathon", 500, 30, BATHROOM));
	listOfEnemies[1]->setY(7);
	listOfEnemies[1]->setX(7);

	grid[listOfEnemies[1]->getZone()][listOfEnemies[1]->getY()][listOfEnemies[1]->getX()] = listOfEnemies[1]->getSymbol();
}

Enemy * Map::findEnemy(short tempY, short tempX)
{
	for (int i = 0; i < listOfEnemies.size(); i++)
	{
		if(!listOfEnemies[i]->isDead())
			if (listOfEnemies[i]->getX() == tempX && listOfEnemies[i]->getY() == tempY && listOfEnemies[i]->getZone() == mapZones)
			{
				return listOfEnemies[i];
			}
	}
}

bool Map::checker(short tempY, short tempX)
{
	if (grid[mapZones][tempY][tempX] == '/')
	{
		zoneChanger(mapZones, true, tempY, tempX);
		return false;
	}
	else if (grid[mapZones][tempY][tempX] == '\\')
	{
		zoneChanger(mapZones, false, tempY, tempX);
		return false;
	}
	else if (grid[mapZones][tempY][tempX] == ' ')
	{
		player->setMovement(tempX, tempY);
		grid[mapZones][tempY][tempX] = player->getSymbol();
		return false;
	}
	else if (isalpha(grid[mapZones][tempY][tempX]))
	{
		battleMode(*player, *findEnemy(tempY, tempX));
		player->setMovement(tempX, tempY);
		grid[mapZones][tempY][tempX] = player->getSymbol();
		return false;
	}
	else
	{
		return true;
	}

}





void Map::createGrids()
{
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 21; j++)
			grid[0][i][j] = entrance[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[1][i][j] = livingroom[i][j];


	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[2][i][j] = bathroom[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[3][i][j] = kitchen[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[4][i][j] = rightroom[i][j];

	for (size_t i = 0; i < 20; i++)
		for (size_t j = 0; j < 21; j++)
			grid[5][i][j] = bossroom[i][j];
}



