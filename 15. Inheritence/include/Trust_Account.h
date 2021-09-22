#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account: public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &, const Trust_Account &);
    public:
        Trust_Account(std::string name = "No_Entry", double amnt = 0.0, double interest_rate = 0.5);
        bool withdraw (double );
        bool deposit(double );

    protected:

    private:
        int withdrawal_number = 0;
};

#endif // TRUST_ACCOUNT_H
