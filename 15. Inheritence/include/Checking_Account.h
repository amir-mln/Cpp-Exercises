#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include <string>
#include <iostream>


class Checking_Account: public Account
{
        friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    public:
        Checking_Account(std::string name = "No_Entry", double balance = 0.0);
        bool withdraw(double );
        //deposit inherits
    protected:
        double fee = 1.50;
    private:
};

#endif // CHECKING_ACCOUNT_H
