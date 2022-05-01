#include "Character.h"


Character::Character() {

}

Character::~Character(){

}


void Character::setupStats(int _hp, int _str, int _def, int _agi) {
	hp = _hp;
	hpMax = _hp;
	str = _str;
	def = _def;
	agi = _agi;
};

void Character::displayStats() {
	cout << "hp: " << hp << "/" << hpMax << " str:" << str << " def:" << def << " agi:" << agi << endl;	
}
int Character::getHP()
{
	return hp;
}

int Character::getHPMax()
{
	return hpMax;
}

int Character::getAGI()
{
	return agi;
}

int Character::getDamage()
{
	return str;
}

int Character::getDefence() 
{
	return def;
}

void Character::takeDamage(int dmg)
{
	int dmgAfterDefense = dmg - def;

	if (dmgAfterDefense < 1) 
		dmgAfterDefense = 1;
	hp = hp - dmgAfterDefense;
	
}

string Character::getName()
{
	return "Character";
}

void Character::printStats()
{
	cout << "stats" << endl;
	cout << "hp: " << getHP() << endl;
	cout << "str: " << getDamage() << endl;
	cout << "def: " << getDefence() << endl;
	cout << "agi: " << getAGI() << endl;
}

;