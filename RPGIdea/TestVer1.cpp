#include "MapClass.h"
#include "Cocaine.h"
#include <iostream>
using namespace std;


#define TEST 2

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

	displayPlayer(ply1);

	ply1.setItem(&coco);
	ply1.useItem();
	cin.get();
	
	displayPlayer(ply1);

	cin.get();



}


void displayPlayer(const Player & p) {
	cout << "Player's name " << p.getName() << endl
		<< p.getName() << " has " << p.getHealth() << " health and " << p.getAttackperturn() << " attack per turn" << endl
		<< "and " << p.getName() << "'s symbol is: " << p.getSymbol();
}

#endif