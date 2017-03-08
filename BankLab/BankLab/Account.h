#include "customer.h"

class Account
{
private:
	int _accountNumber;
	int _balanceInPennies = 0;
	Customer _accountOwner;

public:
	Account(Customer customer, int accountNumber);
	~Account();

	void Deposit(double numberOfPennies);
	void Withdraw(double numberOfPennies);
	double Account::getBalance();
	int getAccountNum();
	string getOwnerName();

};