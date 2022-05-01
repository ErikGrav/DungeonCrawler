#pragma once


#include <iostream>
#include <string>
using namespace std;


class Character
{
protected:   //kinda the same as private but children classes can access them

	//attributes
	int hp, hpMax, str, def, agi;

public:


	Character();
	~Character();  //a deconstructor? does something ffancy... 

	//behaviour or methods

	void setupStats(int _hp, int _str, int _def, int _agi );
	void displayStats();

	int getHP();
	int getHPMax();
	int getAGI();
	int getDamage();
	int getDefence();
	void takeDamage(int dmg);
	string getName();
	void printStats();
};

