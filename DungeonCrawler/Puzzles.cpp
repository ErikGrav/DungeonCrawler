#include "Puzzles.h"

//implements the header.. shows all the stuff...

int puzzle1() {
	cout << "Puzzle one! what is 7+2?" << endl;
	int num;
	cin >> num;
	if (num == 9) {
		cout << "CORRECT! " << endl;
		return 0;
	}
	else {
		cout << "INCORRECT! " << endl;
		return 9;
	}
}
int puzzle2(int _x, int _y) {
	cout << "Puzzle two! what is " << _x << " + " << _y << " ? " << endl;
	int num;
	cin >> num;
	if (num == _x + _y) {
		cout << "CORRECT! " << endl;
		return 0;
	}
	else {
		cout << "INCORRECT! " << endl;
		return 15;
	}
}

int puzzleString(string _correctAnswer, string _question) {
	cout << _question << endl;
	string answer;
	cin >> answer;
	if (answer == _correctAnswer) {
		cout << "CORRECT! " << endl;
		return 0;
	}
	else {
		cout << "INCORRECT! " << endl;
		return 9;
	}
}