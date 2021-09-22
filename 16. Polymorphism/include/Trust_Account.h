#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Saving_Account.h"

class Trust_Account:public Saving_Account
{

    public:
        Trust_Account(std::string name = "No_Entry", double amnt = 0.0, double interest_rate = 0.5);
        virtual ~Trust_Account();
        virtual bool withdraw (double ) override;
        virtual bool deposit(double ) override;
        virtual void print(std::ostream &os) const override;

    private:
        int withdrawal_number = 0;
};

#endif // TRUST_ACCOUNT_H
