#include "Glob.h"

Glob::Glob()
{
	hp = 10;
	hpMax = 10;
	str = 4;
	def = 2;
	agi = 5;
}

Glob::~Glob()
{
}

string Glob::getName()
{
	return "Glob";
}

void Glob::makeDumbNoise()
{
	cout << getName() << " makes a wet bloubbly sound at you" << endl;
}

void Glob::makeDeathRattle()
{
	cout << getName() << " globs and blobs as it dies in a boubbely oozeing pool" << endl;
}
