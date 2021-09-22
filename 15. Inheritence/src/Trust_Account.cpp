#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double amnt, double interest_rate)
:Savings_Account(name, amnt, interest_rate)
{ }

bool Trust_Account::deposit (double amount)
{
    if (amount > 500)
    {
        std::cout << "Applying the bonus...\n";
        return Savings_Account::deposit(amount +50);
    }
    else
    {
        std::cout << "No bonus.\n";
        return Savings_Account::deposit(amount);
    }
}

bool Trust_Account::withdraw (double amount)
{
    withdrawal_number++;
    if (withdrawal_number <= 3)
    {
        return Savings_Account::withdraw(amount);
    }
    else
    {
        std::cout << "Max withdrawals limit is reached!!!\n";
        return false;
    }
}
std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}
