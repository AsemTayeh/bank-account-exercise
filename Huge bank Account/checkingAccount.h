#pragma once
#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;

class checkingAccount :public bankAccount {

protected:

	int minBalance, Service;
	double interest;

public:

	checkingAccount();
	checkingAccount(bankAccount, int, int, double);
	void setMin(int);
	void setSer(int);
	void setInt(double);
	int getMin();
	int getSer();
	bool aboveMin();
	void Withdraw(double);
	double getInt();
	void printChecking();
	~checkingAccount();

};
