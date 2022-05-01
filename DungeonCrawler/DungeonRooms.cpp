#include "DungeonRooms.h"
#include <iostream>
#include <string>

#include "Glob.h"
#include "Hero.h"


void RoomOne(Hero& _hero)
{
	cout << "In the first room stands a tall slender figure in a cloak" << endl;
	cout << " He turns towards you.. ' HALT! DO NOT STEP ANY FURTHER' " << endl;
	cout << " ' To cross this bridge of death you must answer me these questions: ' " << endl;

	int dmg = puzzle1() + puzzle2(_hero.getDamage(), _hero.getAGI()) + puzzleString(_hero.getName(), "What is your name?") + puzzleString(_hero.getFavColor(), "What is your favourite color?");
	_hero.takeDamage(_hero.getHP() - dmg);
	cout << "You are inflicted " << dmg << " amount of dmg! your hp is now " << _hero.getHP() << endl;

}

void Room2Automated(Glob& glob1, Hero& hero)
{
	//Room 2? glob?
	glob1.setupStats(10, 2, 3, 2);
	hero.takeDamage(glob1.getDamage());
	glob1.takeDamage(hero.getDamage());
	glob1.makeDumbNoise();
	cout << "Hero stats: " << endl;
	hero.displayStats();
	cout << "Glob stats: " << endl;
	glob1.displayStats();
	glob1.makeDumbNoise();
}