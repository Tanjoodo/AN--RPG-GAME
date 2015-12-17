#include "MapClass.h"
#include "Cocaine.h"
#include "Bat.h"
#include "Prostitute.h"
#include <iostream>
using namespace std;


#define TEST 3

#if TEST == 1
int main() {
	Player ply1;
	ply1.setSymbol('A');
	Map test;
	test.setPlayer(ply1);
	test.gameRun();
	
	

	cin.get();
	return 0;
}
#elif TEST == 2

void displayPlayer(const Player &);


int main() {
	Player ply1;
	ply1.setSymbol('A');
	Cocaine coco("floor");
	Bat bato("batkaka");
	displayPlayer(ply1);

	ply1.setItem(&coco);
	ply1.useItem();
	cin.get();
	
	displayPlayer(ply1);

	cin.get();

	

	return 0;

}


void displayPlayer(const Player & p) {
	cout << "Player's name " << p.getName() << endl
		<< p.getName() << " has " << p.getHealth() << " health and " << p.getAttackperturn() << " attack per turn" << endl
		<< "and " << p.getName() << "'s symbol is: " << p.getSymbol();
}

#elif TEST == 3

/*
This is the RPG PART, THE BIG DADDY PART
THE BATTLE ROYAL
This test will test the RPG likes of ze program
*/

void displayScore(const Player &player, const Enemy &enemy);

int main() {
	Player player("John", 200, 100);
	Prostitute mary("mary", 200, 40);
	bool enemyTurn = true, playerTurn = true;
	int choice = NULL;
	Cocaine bat("John");


	player.setItem(&bat);


	do
	{
		displayScore(player, mary);
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
					player >> mary;
					cout << "\n" << player.getName() << " deals " << player.getAttack() << " to " << mary.getName();
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

		if (enemyTurn && !mary.isDead())
		{
			for (int i = 0; i < mary.getAttackperturn(); i++)
			{
				mary >> player;
				cout << "\n" << mary.getName() << " deals " << mary.getAttack() << " to " << player.getName();
				cin.get();
			}
			enemyTurn = false;
			playerTurn = true;
		}



	} while (!player.isDead() && !mary.isDead());
	

	if (!player.isDead())
	{
		cout
			<< player.getName() << " has won!" << endl
			<< "you obtain " << mary.dropItem()->getName() << "!" << endl
			<< "Description " << mary.dropItem()->getDescription() << endl;
	}

	else if (!mary.isDead()) {}
	cin.get();
	return 0;

}

void displayScore(const Player &player, const Enemy &enemy) {
	
	cout << "\t\t SCORES " << endl
		<< player.getName() << "'s health is " << player.getHealth() << "\t\t" << enemy.getName() << "'s health is " << enemy.getHealth() << endl
		<< player.getName() << "'s attack is " << player.getAttack() << "\t\t" << enemy.getName() << "'s attack is " << enemy.getAttack() << endl
		<< player.getName() << "'s APT is " << player.getAttackperturn() << "   \t\t" << enemy.getName() << "'s ATP is " << enemy.getAttackperturn() << endl;
}



#endif