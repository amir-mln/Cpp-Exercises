#include "Trust_Account.h"
#include <iostream>

Trust_Account::Trust_Account(std::string name, double amnt, double interest_rate)
:Saving_Account(name, amnt, interest_rate)
{ }

bool Trust_Account::deposit (double amount)
{
    if (amount > 500)
    {
        std::cout << "Applying the bonus...\n";
        return Saving_Account::deposit(amount +50);
    }
    else
    {
        std::cout << "No bonus.\n";
        return Saving_Account::deposit(amount);
    }
}

bool Trust_Account::withdraw (double amount)
{
    withdrawal_number++;
    if (withdrawal_number <= 3)
    {
        return Saving_Account::withdraw(amount);
    }
    else
    {
        std::cout << "Max withdrawals limit is reached!!!\n";
        return false;
    }
}

void Trust_Account::print(std::ostream &os) const
{
    os << "Trust Account: " << name << ", " << balance<<", " << int_rate << "%, " << withdrawal_number<< "."<< std::endl;

}
Trust_Account::~Trust_Account()
{
    //dtor
}
