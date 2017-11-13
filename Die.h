/*
 * Author:  Jiwon Park
 * Date:    2017-11-13
 * Feature: DieGame's Die.h
 */


#if !defined(_DIE_H)
#define _DIE_H


class Die {
private:
	int faceValue;
public:
	void roll();
	int getFaceValue();
};

#endif  //_DIE_H
