#pragma once
#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <iostream>
using namespace std;

class Attribute
{
private:
	//should have a string name, an int baseScore, int currentScore.
	string name;
	int baseScore;
	int currentScore;
public:
	Attribute();
	Attribute(string name);//Exit Ticket 7/12/24
	Attribute(string name, int value);//Exit Ticket 7/12/24
	string getName();
	void setName(string n);
	int getScore();
	void modifyScore(int mod);
	int getModifier();
	void resetCurrentScore();
};

#endif