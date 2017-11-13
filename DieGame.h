/*
 * Author:  Jiwon Park
 * Date:    2017-11-13
 * Feature: DieGame's DieGame.h
 */


#if !defined(_DIEGAME_H)
#define _DIEGAME_H

#include "Die.h"

class DieGame {
private:
	Die die1;
	Die die2;
public:
	bool play();
};

#endif  //_DIEGAME_H
