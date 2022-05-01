#include "Hero.h"

Hero::Hero()
{
}

Hero::~Hero()
{
}

void Hero::setName(string s)
{
	name = s;
}
void Hero::setFavColor(string c) {
	favColor = c;
}

void Hero::setAge(int a)
{
	age = a;
}

void Hero::setFavNumber(int n)
{
	favNumber = n;
}

string Hero::getName()
{
	return name;
}

void Hero::heal(int amount)
{
	hp += amount; // hp = hp + amoount
	if (hp > hpMax)
		hp = hpMax;
}

void Hero::atkBoost(int amount)
{
	str += amount;
}

void Hero::defBoost(int amount)
{
	def += amount;
}

string Hero::getFavColor() {
	return favColor;
}

int Hero::getFavNumber()
{
	return favNumber;
}

int Hero::getAge()
{
	return age;
}

