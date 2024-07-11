#pragma once
#ifndef DIE_H
#define DIE_H

#include <iostream>
using namespace std;


class Die
{
private:
	int faceValue;
	const int SIDES;
public:
	Die();
	Die(int sides);
	void roll();
	int getFaceValue();
	int getSides();
	string dieToString();
};


#endif
