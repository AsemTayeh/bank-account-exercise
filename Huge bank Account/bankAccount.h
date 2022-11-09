#pragma once
#include <iostream>
#include <string>
#include "Date Clock.h"

using namespace std;

class bankAccount {
	
protected: 

	int bankID;
	double balance;
	dateClock DoC;

public:

	bankAccount();
	bankAccount(int, double, dateClock);
	void setDate(dateClock);
	void setID(int);
	void setBalance(double);
	dateClock getDate();
	int getID();
	void Deposit(double);
	bool canWithdraw(double);
	void Withdraw(double);
	double getBalance();
	void printBank();
	~bankAccount();

};
