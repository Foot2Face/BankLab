#include "Account.h"

Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(double numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
}

void Account::Withdraw(double numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
}

double Account::getBalance()
{
	double balance = _balanceInPennies;
	balance / 100; 

	return balance;
}

int Account::getAccountNum()
{
	return _accountNumber;
}

string Account::getOwnerName()
{
	string name = _accountOwner.getFullName();
	return name;
}
