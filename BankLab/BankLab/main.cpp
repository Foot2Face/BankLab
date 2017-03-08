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
	system("cls");
	cout << "\n Welcome to " << bank.getName()
		<< "\n\n 1) Add Account"
		<< "\n 2) Deposit"
		<< "\n 3) Display Accounts"
		<< "\n\n What would you like to do?"
		<< "\n >: ";

	switch (cin.get())
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
		displayMenu();
		break;
	}

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
		<< " >: ";
	cin >> accountNumber;

	Account account = Account(customer, accountNumber);

	bank.createAccount(account);
}

void transactionMenu()
{
	int chosenAccount;


	system("cls");
	cout << "\n " << bank.getName()
		<< "\n\n Which account would you like to access?"
		<< bank.listAccounts()
		<< " >: ";
	cin >> chosenAccount;

	system("cls");
	cout << "\n\n Which account would you like to access?"
		<< bank.listAccounts()
		<< " >: ";



}

void displayAccountsMenu()
{
	system("cls");
	cout << "\n " << bank.getName() << endl;

	bank.showAccounts();

}
