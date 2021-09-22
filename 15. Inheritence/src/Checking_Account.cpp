#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
:Account (name, balance)
{ }

bool Checking_Account::withdraw(double amnt)
{
    std::cout << "Applying 1.50$ fee...\n";
    return Account::withdraw(amnt + fee);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account)
{
    os << "[Checking_Account: " << account.name << ": " << account.balance << ", " << account.fee << "$]";
    return os;
}
