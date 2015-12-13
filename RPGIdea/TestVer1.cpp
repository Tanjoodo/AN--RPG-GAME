#include "MapClass.h"
#include <iostream>
using namespace std;

int main() {
	Player ply1;
	ply1.setSymbol('A');
	Map test;
	test.setPlayer(ply1);
	test.gameRun();

	cin.get();
	return 0;
}