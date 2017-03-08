/*
James Ford - studentID: 2523352
C++ Programing 
3/6/2017
*/
#include <iostream>
#include "Bank.h"

void displayMenu();
void addAccountMenu();
void transactionMenu();
void displayAccountsMenu();


Bank bank = Bank("Biff's Tannen");

int main()
{
	displayMenu();



	system("pause");
	return 0;
}

void displayMenu()
{
	int input = 0;
	do
	{
		system("cls");
		cout << "\n Welcome to " << bank.getName()
			<< "\n\n 1) Add Account"
			<< "\n 2) Deposit"
			<< "\n 3) Display Accounts"
			<< "\n\n What would you like to do?"
			<< "\n >: ";
		cin >> input;

		switch (input)
		{
		case 1:
			addAccountMenu();
			break;

		case 2:
			transactionMenu();
			break;

		case 3:
			displayAccountsMenu();
			break;

		default:
			break;
		}
	} while (input != 156512186218351218);
}

void addAccountMenu()
{
	string firstname;
	string lastname;
	int accountNumber;

	system("cls");
	cout << "\n " << bank.getName()
		<< "\n\n Please enter your First and Last name"
		<< "\n Customer's First Name"
		<< "\n >: ";
	cin >> firstname;

	cout << "\n Customer's Last Name"
		<< "\n >: ";
	cin >> lastname;

	Customer customer = Customer(firstname, lastname);

	cout << "\n Now input an Account Number"
		<< "\n >: ";
	cin >> accountNumber;

	Account account = Account(customer, accountNumber);

	bank.createAccount(account);
}

void transactionMenu()
{
	int chosenAccount;
	int transactionType;
	double amount;

	system("cls");
	cout << "\n " << bank.getName()
		<< "\n\n Which account would you like to access?"
		<< bank.listAccounts()
		<< "\n >: ";
	cin >> chosenAccount;

	system("cls");
	cout << "\n What type of transaction would you like?"
		<< "\n\n 1) Deposit"
		<< "\n 2) Withdraw"
		<< "\n >: ";
	cin >> transactionType;

	system("cls");
	cout << "\n How much would you like to transfer? (In Dollars)"
		<< "\n >: ";
	cin >> amount;

	switch (transactionType)
	{
	case 1: bank.Deposit(chosenAccount - 1, (amount * 100)); break;
	case 2: bank.Withdraw(chosenAccount -1, (amount * 100)); break;
	default: break;
	}
}

void displayAccountsMenu()
{
	system("cls");
	cout << "\n " << bank.getName() << endl;

	cout << bank.showAccounts() << endl;
	system("pause");
}
