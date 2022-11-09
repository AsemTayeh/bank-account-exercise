#include <iostream>
#include <string>
#include "clockType.h"
#include "dayClock.h"
#include "Date Clock.h"
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"

using namespace std;

/*   CLOCK TYPE IMPLEMENTATION */

clockType::clockType() {

	Hour = 00;
	Min = 00;
	Sec = 00;

}

clockType::clockType(int h, int m, int s) {

	Hour = h;
	Min = h;
	Sec = h;

}

void clockType::setHr(int h) {

	Hour = h;

}

void clockType::setMin(int m) {

	Min = m;

}

void clockType::setSec(int s) {

	Sec = s;

}

int clockType::getHr() {

	return Hour;

}

int clockType::getMin() {

	return Min;

}

int clockType::getSec() {

	return Sec;

}

void clockType::printClock() {

	if (Hour < 10 && Min < 60 && Sec < 60)
		cout << "0" << getHr() << ":" << "0" << getMin() << ":" << "0" << getSec() << endl;
	else
		cout << getHr() << ":" << getMin() << ":" << getSec() << endl;

}

clockType::~clockType() {

	cout << "\n IN clockType DESTRUCTOR... \n";

}

/*    DAY CLOCK IMPLEMENTATION  */

dayClock::dayClock() :clockType() {

	Day = "Default Day";

}

dayClock::dayClock(clockType c1, string d) :clockType(c1) {

	Day = d;

}

void dayClock::setDay(string d) {

	Day = d;

}

string dayClock::getDay() {

	return Day;

}

void dayClock::printDay() {

	clockType::printClock();
	cout << "Day is: " << getDay() << endl;

}

dayClock::~dayClock() {

	cout << "\n IN dayClock DESTRUCTOR...\n";

}

/*  DATE CLOCK IMPLEMENTATION  */

dateClock::dateClock() :dayClock() {

	ddate = 01;
	month = 01;
	year = 1970;

}

dateClock::dateClock(dayClock d1, int d, int m, int y) : dayClock(d1) {

	ddate = d;
	month = m;
	year = y;

}

void dateClock::setDdate(int d) {

	ddate = d;

}

void dateClock::setMonth(int m) {

	month = m;

}

void dateClock::setYear(int y) {

	year = y;

}

int dateClock::getDdate() {

	return ddate;

}

int dateClock::getMonth() {

	return month;

}

int dateClock::getYear() {

	return year;

}

void dateClock::printDate() {

	dayClock::printDay();
	cout << "Date is: " << ddate << " / " << month << " / " << year << endl;

}

dateClock::~dateClock() {

	cout << "\n IN dateClock DESTRUCTOR...\n";

}

/*  BANK ACCOUNT IMPLEMENTATION */

bankAccount::bankAccount() :DoC() {

	bankID = 111;
	balance = 00;

}

bankAccount::bankAccount(int id, double b, dateClock d1) :DoC(d1) {

	bankID = id;
	balance = b;

}

void bankAccount::setDate(dateClock d1) {

	DoC = d1;

}

void bankAccount::setID(int id) {

	bankID = id;

}

void bankAccount::setBalance(double b) {

	balance = b;

}

dateClock bankAccount::getDate() {

	return DoC;

}

int bankAccount::getID() {

	return bankID;

}

void bankAccount::Deposit(double d) {

	balance += d;

}

bool bankAccount::canWithdraw(double c) {

	return (balance - c >= 0);

}

void bankAccount::Withdraw(double w) {

	if (canWithdraw(w))
		balance -= w;
	else
		cout << "Insufficient funds" << endl;

}

double bankAccount::getBalance() {

	return balance;

}

void bankAccount::printBank() {

	DoC.printDate();
	cout << "Bank details are: " << endl;
	cout << "Bank ID is: " << getID() << endl;
	cout << "Bank balance is: " << getBalance() << endl;

}

bankAccount::~bankAccount() {

	cout << "\n IN bankAccount DESTRUCTOR...\n";

}

/*  Checking Account Imp   */

checkingAccount::checkingAccount() :bankAccount() {

	minBalance = 200;
	Service = 5;
	interest = 0.25;

}

checkingAccount::checkingAccount(bankAccount b1, int min, int ser, double inte) :bankAccount(b1) {

	minBalance = min;
	Service = ser;
	interest = inte;

}

void checkingAccount::setMin(int min) {

	minBalance = min;

}

void checkingAccount::setSer(int ser) {

	Service = ser;

}

void checkingAccount::setInt(double inte) {

	interest = inte;

}

int checkingAccount::getMin() {

	return minBalance;

}

int checkingAccount::getSer() {

	return Service;

}

bool checkingAccount::aboveMin() {

	if (getBalance() >= 200)
		return true;
	else
		cout << "Bank balance is less than minimum." << endl;

}

void checkingAccount::Withdraw(double w) {

	if (canWithdraw(w))
		balance -= w;
	else
		cout << "Insufficient funds.";

}

double checkingAccount::getInt() {

	//Interest rate after service
	double trest = 5;
	interest = 5 * 0.25;
	return interest;

}

void checkingAccount::printChecking() {

	bankAccount::printBank();
	cout << "Minimum balance is: " << getMin() << endl;
	cout << "Service fee is: " << getSer() << endl;
	cout << "Interest post service is: " << getInt() << endl;

}

checkingAccount::~checkingAccount() {

	cout << "\nIN checkingAccount DESTRUCTOR...\n";

}

/*    Savings Account Implementation     */

savingsAccount::savingsAccount() :checkingAccount() {


}

savingsAccount::savingsAccount(checkingAccount c1) :checkingAccount(c1) {


}

void savingsAccount::printSavings() {

	checkingAccount::printChecking();
}

savingsAccount::~savingsAccount() {

	cout << "\n IN savingsAccount DESTRUCTOR...\n";

}