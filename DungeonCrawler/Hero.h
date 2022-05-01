#pragma once
#include <iostream>
#include <string>
#include "Character.h"

// inherits from character
class Hero : public Character
{
private:
	string name;
	string favColor;
	int favNumber;
	int age;

public:
	Hero();
	~Hero();

	void setName(string s);
	void setFavColor(string c);
	void setAge(int a);
	void setFavNumber(int n);
	//replaces getName from CHaracter
	string getName();
	string getFavColor();
	int getFavNumber();
	int getAge();

	void heal(int amount);
	void atkBoost(int amount);
	void defBoost(int amount);

};

