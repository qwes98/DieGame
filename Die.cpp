/*
 *
 * Author:  Jiwon Park
 * Date:    2017-11-13
 * Feature: DieGame's Die.cpp
 */


#include "Die.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>

void Die::roll() const {
	faceValue = intRandom(dieMinValue, dieMaxValue);
}

int Die::getFaceValue() const {
	return faceValue;
}

int Die::intRandom(const int min, const int max) const {
	static bool first = true;
	if(first) {
		srand(time(NULL));
		first = false;
	}
	return min + rand() % (max - min);
}
