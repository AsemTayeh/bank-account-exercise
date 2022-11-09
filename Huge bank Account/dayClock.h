#pragma once
#include <iostream>
#include <string>
#include "clockType.h"

using namespace std;

class dayClock :public clockType {

	string Day;

public:

	dayClock();
	dayClock(clockType, string);
	void setDay(string);
	string getDay();
	void printDay();
	~dayClock();

};
