#include "customer.h"

Customer::Customer(string firstname, string lastname) : _firstName(firstname), _lastName(lastname)
{

}

Customer::~Customer()
{

}

string Customer::getFullName()
{
	return _lastName + ", " + _firstName;
}