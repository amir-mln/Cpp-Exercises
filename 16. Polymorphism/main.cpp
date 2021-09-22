#include <iostream>
#include <vector>
#include "Saving_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Account *pointr = new Trust_Account ("John", 5000, 1);
    cout << *pointr << endl;
    Account *p1 = new Checking_Account("Larry", 10000);
    Account *p2 = new Saving_Account("Moe", 1000);
    Account *p3 = new Trust_Account("Curly");

    std::vector<Account *> accounts {p1,p2,p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;
    return 0;
}
