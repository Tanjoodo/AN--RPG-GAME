#include "Player.h"
#include <windows.h>
#include <iostream>

Player::Player(string newName, int newHealth, int newAttack) : Unit(newName, newHealth, newAttack)
{
	this->attackperturn = 1;
}

Player::Player() 
{
	this->name = "PLAYERNAME";
	this->health = 50;
	this->attack = 2;
	this->attackperturn = 1;
}

Player::~Player()
{
	
}

void Player::setItem(Item * newItem)
{
	itemventory.push_back(newItem);
}



void Player::useItem(int numberOfItem)
{
	list<Item*>::iterator it = itemventory.begin();
	
	
	for (int i = 0; i < numberOfItem; i++)
		it++;
	

	(*it)->useBuff(*this);
	it = itemventory.erase(it); // then erase it from the node;
}


void Player::setMovement(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Player::getItem()
{
	int choice;
	this->displayItemList();

	if (!itemventory.empty())
	{
		cout << "\nChoose the item you want to use: ";
		cin >> choice; cin.ignore(80, '\n'); // doesn't really validate for A's and B's so this code will probably explode, but it' okay

		while ((choice-1) < 0 || (choice-1) >= itemventory.size()) {
			cout << "\tWrong choice, try again: ";
			cin >> choice; cin.ignore(80, '\n');
		} // though it does check incase the iterator explodes
		this->useItem(choice - 1); // uses item choice -1, so if the user chooses 1. it's actually 0 on the itemventorry list
	}

}


/*
* DisplayItemList() displays the item list using a const_iterator
* I love my iterators so I try my best to use them in each and everygod (Bless STL cotainers)
*/

void Player::displayItemList()
{
	list<Item*>::const_iterator it = itemventory.cbegin(); // creates an const_iterator, so you won't manipulate it

	if (!itemventory.empty())  // if it's not enemy
	{
		for (int i = 0; i < itemventory.size(); i++, it++)  // display List
		{
			cout << "\t" << i+1 << ". "  << (*it)->getName(); 
			if (i % 3 != 0)
				cout << endl;
		}
	}
	else // you have nothing sire, and movies on
	{
		cout << "YOU HAVE NOTHING SIRE";
	}
}

void Player::operator>>(Unit & enemy)
{
	// attacks player
	enemy.setHealth(enemy.getHealth() - this->attack);
}

