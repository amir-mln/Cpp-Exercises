#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include <iostream>

class Checking_Account:public Account
{
    public:
        Checking_Account(std::string name = "No_Entry", double balance = 0.0);
        virtual void print (std::ostream &os) const override;
        virtual bool withdraw(double amount) override;
        virtual bool deposit(double ) override;
        virtual ~Checking_Account();

    protected:
        double fee = 1.50;

};

#endif // CHECKING_ACCOUNT_H
