#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
:Account (name, balance)
{ }

bool Checking_Account::withdraw(double amnt)
{
    std::cout << "Applying 1.50$ fee...\n";
    return Account::withdraw(amnt + fee);
}

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}


void Checking_Account::print (std::ostream &os) const
{
    os << "\n\nChecking Account: " << name << ", " << balance<<", " << fee << "."<< std::endl;

}
Checking_Account::~Checking_Account()
{
    //dtor
}
