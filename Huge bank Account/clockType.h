#pragma once
#include <iostream>
#include <string>

using namespace std;

class clockType {

	int Hour, Min, Sec;
	

public:

	clockType();
	clockType(int, int, int);
	void setHr(int);
	void setMin(int);
	void setSec(int);
	int getHr();
	int getMin();
	int getSec();
	void printClock();
	~clockType();

 };