#include "Bank.h"

Bank::Bank(string name) : _name(name)
{
}

Bank::~Bank()
{
}

string Bank::getName()
{
	return _name;
}

void Bank::createAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

string Bank::showAccounts()
{
	string output = "\n Accounts for " + _name + "\n ";
	for (Account account : _accounts)
	{
		output += to_string(account.getAccountNum()) += "\n ";
	}

	return output;
}

string Bank::listAccounts()
{
	string output = "\n Accounts for " + _name + "\n ";
	int index = 0;
	for (Account account : _accounts)
	{
		output += to_string(index++) += ") " + to_string(account.getAccountNum()) += "\n ";
	}

	return string();
}

void Bank::Deposit(int accountNumber, int amount)
{
	for (Account account : _accounts)
	{
		if (account.getAccountNum() == accountNumber)
		{
			account.Deposit(amount);
			return;
		}
	}
}

void Bank::withdraw(int accountNumber, int amount)
{
	for (Account account : _accounts)
	{
		if (account.getAccountNum() == accountNumber)
		{
			account.Withdraw(amount);
			return;
		}
	}
}
