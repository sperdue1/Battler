#include "Die.h"
#include <iostream>
#include <string>

using namespace std;

Die::Die() :  //colon has to go here
	SIDES(6) //member initialization list, declare consts here
{
	roll();
}

Die::Die(int sides) :
	SIDES(sides) {
	roll();
}
int Die::getSides() {
	return SIDES;
}

void Die::roll() {
	faceValue = rand() % SIDES + 1;
}

int Die::getFaceValue() {
	return faceValue;
}

string Die::dieToString() {
	string result = "A " + to_string(SIDES) + "-sided die "
		+ "showing a " + to_string(faceValue);
	return result;
}
