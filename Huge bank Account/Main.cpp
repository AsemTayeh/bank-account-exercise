#include <iostream>
#include "Date Clock.h"
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"

using namespace std;

int main() {

	clockType c1(1, 1, 1);
	dayClock d1(c1, "Friday");
	dateClock d2(d1, 1, 1, 1970);
	bankAccount b1(11, 00, d2);


	checkingAccount a1(b1,1, 1, 0.16);
	a1.aboveMin();

	savingsAccount s1(a1);
	s1.setBalance(2000);
	cout << s1.getBalance();
	s1.Withdraw(300);
	cout << s1.getBalance();
	


	return 0;
}