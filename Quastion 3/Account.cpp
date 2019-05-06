#include "account.h"



Account::Account() : accountNumber(0), code(0), balance(0) {};

Account::Account(uint an, uint c, int bal) : accountNumber(an), balance(bal) {
	if (c < 1000 || c > 9999) { 
		do {
			cout << "wrong code number, need to have 4 digits, please type agin";
			cin >> c;
		} while (c < 1000 || c > 9999);
	}
	code = c;
}

void Account::withdraw(int nis) {
	if (nis > 2500) throw 0;
	else if (balance - nis < -6000) throw 1;
	else {
		balance -= nis;
	}
}

void Account::deposit(int nis) {
	if (nis > 10000) throw 10;
	else balance += nis;
}

istream& operator>>(istream is, Account& ac) {
	//cout << "Type the account number: ";
	is >> ac.accountNumber;
	//cout << "Type the user code";
	is >> ac.code;
	return is;
}

Account::~Account()
{
}
