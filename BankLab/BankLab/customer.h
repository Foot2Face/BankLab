#include <string>
using namespace std;

class Customer
{
public:
	string _firstName;
	string _lastName;

private:
	string Customer::getFullName();
	Customer::Customer(string firstname, string lastname);
	Customer::~Customer();
};