#pragma once
#include <iostream>
#include <string>
#include "dayClock.h"

using namespace std;

class dateClock :public dayClock {

	int ddate, month, year;

public:

	dateClock();
	dateClock(dayClock, int, int, int);
	void setDdate(int);
	void setMonth(int);
	void setYear(int);
	int getDdate();
	int getMonth();
	int getYear();
	void printDate();
	~dateClock();

};
