#pragma once
#include<iostream>
#include"mytypes.h"
using namespace std;
class Account
{
	uint accountNumber;
	uint code;
	int balance;
public:
	friend istream& operator>>(istream is, Account& ac);
	void withdraw(int nis);
	void deposit(int nis);
	int getBalance() { return balance; };
	int getAccountNumber() { return accountNumber; };
	void getAccountNumber(int n) { accountNumber = n; };

	int getCode() { return code; };
	friend istream operator>>(istream, int);
	static void sumWithdraw(int num);
	static void sumDeposit(int num);
	static int getSumWithdraw();
	static int getSumDeposit();
	Account();
	Account(uint an, uint c, int bal);
	~Account();
};



