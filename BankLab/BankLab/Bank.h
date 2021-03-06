#pragma once
#include "Account.h"
#include <vector>

class Bank
{
private:
	string _name;
	vector<Account> _accounts;

public:
	Bank(string name);
	~Bank();

	string Bank::getName();
	void createAccount(Account newAccount);
	string showAccounts();
	string listAccounts();
	void Deposit(int accountNumber, double amount);
	void Withdraw(int accountNumber, double amount);
};

