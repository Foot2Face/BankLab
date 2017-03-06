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

	void Deposit(int numberOfPennies);
	void Withdraw(int numberOfPennies);
	int Account::getBalance();

};