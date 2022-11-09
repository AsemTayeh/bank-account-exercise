#pragma once
#include <iostream>
#include <string>
#include "checkingAccount.h"

using namespace std;

class savingsAccount :public checkingAccount {


public:

	savingsAccount();
	savingsAccount(checkingAccount);
	void printSavings();
	~savingsAccount();

};