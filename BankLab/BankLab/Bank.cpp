#include "Bank.h"
#include <iomanip> 

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
	int index = 1;
	for (Account account : _accounts)
	{
		setprecision(2);
		fixed;
		output += to_string(index++) + ") "
			+ to_string(account.getAccountNum()) + " - "
			+ account.getOwnerName() + " - "
			+ to_string(account.getBalance())
			+= "\n ";
	}

	return output;
}

string Bank::listAccounts()
{
	string output = "\n Accounts for " + _name + "\n\n ";
	int index = 1;
	for (Account account : _accounts)
	{
		output += to_string(index++) += ") " + to_string(account.getAccountNum()) += "\n ";
	}

	return output;
}

void Bank::Deposit(int accountNumber, double amount)
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

void Bank::Withdraw(int accountNumber, double amount)
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
