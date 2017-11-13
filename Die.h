/*
 * Author:  Jiwon Park
 * Date:    2017-11-13
 * Feature: DieGame's Die.h
 */


#if !defined(_DIE_H)
#define _DIE_H


class Die {
private:
	const int dieMinValue = 1;
	const int dieMaxValue = 6;
	mutable int faceValue;

	int intRandom(const int min, const int max) const;
public:
	void roll() const;
	int getFaceValue() const;
};

#endif  //_DIE_H
