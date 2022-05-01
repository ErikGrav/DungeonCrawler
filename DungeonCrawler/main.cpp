//includes


#include <iostream>
#include <string>
#include "Puzzles.h"
#include "Character.h"
#include "Hero.h"
#include "Glob.h"
#include "Mimic.h"
#include "main.h"

using namespace std;

void main() {
	Hero hero;
	Glob glob1;

	IntroductionAndBasics(hero);
	AgeGoofAnswers(hero.getAge() + hero.getFavNumber(), hero.getFavNumber());
	SetupCharacterStats(hero);
	CountDownaGateOpens();
	RoomOne(hero);

	//build an object of class type chracter: 

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

	//pointers

	Glob* globPtr = new Glob();
	(*globPtr).displayStats();
	globPtr->takeDamage(3455);
	globPtr->displayStats();
	globPtr->makeDumbNoise();
	delete globPtr;
	globPtr = NULL;
	if (globPtr != NULL)
		cout << "glob ptr pointing to something?" << endl;
	else
		cout << "glob is dead!!!" << endl;


	//polymorphism
	Character* charPtr = &glob1;
	charPtr->takeDamage(-5678);
	charPtr->displayStats();
	//casting
	Glob* globPtr2 = (Glob*)charPtr;
	globPtr2->makeDumbNoise();



	system("pause");
}















void RoomOne(Hero &_hero)
{
	cout << "In the first room stands a tall slender figure in a cloak" << endl;
	cout << " He turns towards you.. ' HALT! DO NOT STEP ANY FURTHER' " << endl;
	cout << " ' To cross this bridge of death you must answer me these questions: ' " << endl;

	int dmg = puzzle1() + puzzle2(_hero.getDamage(), _hero.getAGI()) + puzzleString(_hero.getName(), "What is your name?") + puzzleString(_hero.getFavColor(), "What is your favourite color?");
	_hero.takeDamage(_hero.getHP() - dmg);
	cout << "You are inflicted " << dmg << " amount of dmg! your hp is now " << _hero.getHP() << endl;

}

void SetupCharacterStats(Hero &_hero)//bool& characterSetup, int& choise, int& hp, int& str, int& def, int& agi)
{
	int choise;
	bool characterSetup = false;
	while (characterSetup == false) {

		//hero stats
		cout << "what kind of adventurer are you? " << endl;
		cout << "1 - bersker" << endl;
		cout << "2 - buff nutjob" << endl;
		cout << "3 - speedy ninja" << endl;
		cin >> choise;

		if (choise == 1) {
			_hero.setupStats(60, 10, 2, 3);
		}
		else if (choise == 2) {
			_hero.setupStats(10, 4, 5, 1);
		}
		else if (choise == 3) {
			_hero.setupStats(80, 3, 1, 10);
		}
		else {
			cout << "Invalid class, try again" << endl;
		}

		if (choise >= 1 && choise <= 3) {
			characterSetup = true;
		}
	}
}

void AgeGoofAnswers(int newAge, int favNum)
{

	if (newAge >= 80) {
		cout << "You might not even live to this age! " << endl;
	}
	if (favNum == 64) {
		cout << "NIce favourite number by the way" << endl;;
	}
}

void IntroductionAndBasics(Hero &_hero)
{
	string name;
	int age;
	string color;
	int favNum;
	//fire up shit
	cout << "hello there" << endl;
	cout << "what is your name" << endl;
	cin >> name;
	_hero.setName(name);
	cout << "hello there" << _hero.getName() << ", muahaha" << endl;
	cout << "how old are you?" << endl;
	cin >> age;
	_hero.setAge(age);
	cout << "so you are " << age << "years old" << endl;
	cout << "what is your favourite color?" << endl;
	cin >> color;
	_hero.setFavColor(color);
	cout << "what is your Favourite number?" << endl;
	cin >> favNum;
	_hero.setFavNumber(favNum);
	cout << " well now you are stuck in this dungeon for " << favNum << " years! mouhahahaha" << endl;
	cout << "Its time to escape before you turn " << age + favNum << " Years old " << endl;
}



void CountDownaGateOpens()
{
	cout << "the first gate is opnening, counting down..." << endl;
	for (int i = 10; i >= 0; i--) {
		cout << i << "..." << endl;
	}
	cout << "*rumble rumble*" << endl;
	cout << "*the gate opens" << endl;
}

