/*#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

CONCEPTS I USED WHEN I WAS CREATING THE GRID



//declare array for game board and fill it
char gameBoard[20][20] =
{ { '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-', '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' }
,{ '|' , '#' , '#' , '#' , '|' , '#' , '#' , '#' , '#' , '#' , '#', '#' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '#' , '|' , '-' , '-' , '-' , '-', '-' , '-' , '#' , '-' , '-' , '-' , '-' , '-' , '|' }
,{ '|' , '#' , '|' , '#' , '#' , '#' , '|' , '#' , '#' , '#' , '#', '#' , '|' , '#' , '#' , '#' , '#' , '#' , '#' , '|' }
,{ '|' , 'O' , '|' , '#' , '|' , '-' , '-' , '#' , '|' , '-' , '|', '#' , '|' , '-' , '-' , '-' , '-' , '-' , '#' , '|' }
,{ '|' , '-' , '-' , '-' , '|' , '#' , '|' , '#' , '|' , '#' , '|', '#' , '|' , '#' , '#' , '#' , '#' , '#' , '#' , '|' }
,{ '|' , '#' , '#' , '#' , '|' , '#' , '|' , '#' , '#' , '#' , '|', '#' , '|' , '#' , '-' , '-' , '-' , '-' , '-' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '#' , '|' , '-' , '#' , '|' , '-', '#' , '|' , '#' , '|' , '#' , '#' , '#' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '#' , '|' , '#' , '#' , '|' , '#', '#' , '|' , '#' , '#' , '#' , '-' , '-' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '#' , '|' , '#' , '-' , '|' , '#', '#' , '|' , '-' , '-' , '-' , '|' , '|' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '#' , '#' , '|' , '#' , '#' , '|' , '#', '#' , '#' , '|' , '#' , '#' , '#' , '|' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '-' , '-' , '-' , '#' , '|' , '#', '|' , '#' , '|' , '#' , '-' , '-' , '|' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '#' , '#' , '#' , '#' , '|' , '#', '|' , '#' , '|' , '#' , '|' , '#' , '#' , '#' , '|' }
,{ '|' , '#' , '-' , '-' , '|' , '#' , '|' , '-' , '#' , '|' , '#', '|' , '#' , '|' , '#' , '-' , '-' , '#' , '-' , '|' }
,{ '|' , '#' , '#' , '#' , '|' , '#' , '|' , '#' , '#' , '|' , '#', '|' , '#' , '|' , '#' , '#' , '#' , '#' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '#' , '|' , '#' , '#' , '|' , '#', '|' , '#' , '|' , '-' , '-' , '-' , '-' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '#' , '#' , '|' , '#' , '#' , '|' , '#', '|' , '#' , '#' , '#' , '#' , '#' , '#' , '#' , '|' }
,{ '|' , '#' , '|' , '#' , '|' , '-' , '-' , '-' , '-' , '-' , '#', '|' , '#' , '|' , '-' , '-' , '-' , '-' , '#' , '|' }
,{ '|' , 'X' , '|' , '#' , '|' , '#' , '#' , '#' , '#' , '#' , '#', '|' , '#' , '|' , '#' , '#' , '#' , '#' , '#' , '|' }
,{ '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-', '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' , '-' } };



void up(int &, int &); // pass the players position to all 
void down(int &, int &); // functions by reference
void left(int &, int &);
void right(int &, int &);
char getMovement();

struct Player
{
	int playerX = 18; // variable to hold players x coord remember higher numbers move right
	int playerY = 1;
};

int main()
{
	int playerX = 1; // variable to hold players x coord remember higher numbers move right
	int playerY = 18; // variable to hold players y coord remember higher numbers move down
	bool game = false; // bool to hold tell when the game is over

					   // at start of program clear the screen and output the map

	do
	{
		system("cls");
		for (int i = 0; i<20; i++)
		{
			for (int j = 0; j<20; j++)
			{
				cout << gameBoard[i][j];
			}

			cout << endl;
		}

		// After the board is displayed tell the player their current location and ask which
		// way they want to go and get their input
		cout << "Your current location is (" << playerX << "," << playerY << ")" << endl;
		cout << "Which way to you want to go? (Up = U, Down = D, Left = L, Right = R)" << endl;
		//	char UserMove;
		//	cin >> UserMove;

		// Based off the input the user enters call one of the functions to move their player
		// in the desired direction
		//	UserMove = toupper(UserMove);


		switch (getMovement())
		{
		case'U': up(playerX, playerY); break;
		case 'D': down(playerX, playerY); break;
		case 'L': left(playerX, playerY); break;
		case 'R': right(playerX, playerY); break;
		default:
			break;
		}

		if (playerX == 1 && playerY == 4)
		{
			game = true;
		}

	} // end do while loop
	while (game == false);
	// outside the loop make sure to tell the player they won
	system("cls");
	cout << "YOU WIN!!!" << endl;


	system("pause");
	return 0;
} // end main


void up(int &playerX, int &playerY) // function that moves the player in the up direction
{
	int prevplayerX = playerX;
	int prevplayerY = playerY;
	if (gameBoard[playerY - 1][playerX] == '#' || gameBoard[playerY - 1][playerX] == 'O')
	{
		playerY--;
		gameBoard[playerY][playerX] = 'X';
		gameBoard[prevplayerY][prevplayerX] = '#';
	}
}


void down(int &playerX, int &playerY) // function that moves the player in the down direction
{
	int prevplayerX = playerX;
	int prevplayerY = playerY;
	if (gameBoard[playerY + 1][playerX] == '#' || gameBoard[playerY + 1][playerX] == 'O')
	{
		playerY++;
		gameBoard[playerY][playerX] = 'X';
		gameBoard[prevplayerY][prevplayerX] = '#';
	}
}

void left(int &playerX, int &playerY) // function that moves the player in the left direction
{
	int prevplayerX = playerX;
	int prevplayerY = playerY;
	if (gameBoard[playerY][playerX - 1] == '#' || gameBoard[playerY][playerX - 1] == 'O')
	{
		playerX--;
		gameBoard[playerY][playerX] = 'X';
		gameBoard[prevplayerY][prevplayerX] = '#';
	}
}


void right(int &playerX, int &playerY) // function that moves the player in the right direction
{

	int prevplayerX = playerX;
	int prevplayerY = playerY;
	if (gameBoard[playerY][playerX + 1] == '#' || gameBoard[playerY][playerX + 1] == 'O')
	{
		playerX++;
		gameBoard[playerY][playerX] = 'X';
		gameBoard[prevplayerY][prevplayerX] = '#';
	}
}


char getMovement() {
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

{ { '--------------------' }
, { '|###|##############|' }
, { '|#|#|#|------#-----|' }
, { '|#|###|#####|######|' }
, { '|O|#|--#|-|#|-----#|' }
, { '|---|#|#|#|#|######|' }
, { '|###|#|###|#|#-----|' }
, { '|#|#|#|-#|-#|#|####|' }
, { '|#|#|#|##|##|###--#|' }
, { '|#|#|#|#-|##|---||#|' }
, { '|#|###|##|###|###|#|' }
, { '|#|#|---#|#|#|#--|#|' }
, { '|#|#|####|#|#|#|###|' }
, { '|#--|#|-#|#|#|#--#-|' }
, { '|###|#|##|#|#|#####|' }
, { '|#|#|#|##|#|#|----#|' }
, { '|#|###|##|#|#######|' }
, { '|#|#|-----#|#|----#|' }
, { '|X|#|######|#|#####|' }
, { '--------------------' } };*/





