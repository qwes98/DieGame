/*
 * Author:  Jiwon Park
 * Date:    2017-11-13
 * Feature: DieGame's DieGame.cpp
 */


#include "DieGame.h"
#include <iostream>
#include <string>
using namespace std;


bool DieGame::play() {
	die1.roll();
	int fv1 = die1.getFaceValue();

	die2.roll();
	int fv2 = die2.getFaceValue();

	if(fv1+fv2 == 7) { return true; }
	else { return false; }
}


int main() {
	DieGame dieGame;
	string input;

	while(true) {
		cout << "please enter \'play\' or \'exit\' : ";
		cin >> input;
		if(input == "play") {
			if(dieGame.play()) {
				cout << "You win!" << endl;
			}
			else {
				cout << "You Lose!" << endl;
			}
		}
		else if(input == "exit") { break; }
	}

	return 0;
}
