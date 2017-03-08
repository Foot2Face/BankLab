#include <string>
using namespace std;

class Customer
{
private:
	string _firstName;
	string _lastName;

public:
	string Customer::getFullName();
	Customer::Customer(string firstname, string lastname);
	Customer::~Customer();
};