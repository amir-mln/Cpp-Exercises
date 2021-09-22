#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);

    // Savings

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking
    vector <Checking_Account> chk_accounts;
    chk_accounts.push_back({});
    chk_accounts.push_back({"Jason"});
    chk_accounts.push_back({"Andrew", 2000});
    chk_accounts.push_back({"Samuel", 5000});

    display(chk_accounts);
    deposit(chk_accounts, 3000);
    display(chk_accounts);
    withdraw(chk_accounts, 2000);


    //Trust

    vector <Trust_Account> trs_accounts;
    trs_accounts.push_back({});
    trs_accounts.push_back({"Ellen"});
    trs_accounts.push_back({"Sam", 2000});
    trs_accounts.push_back({"Sara", 5000, 2});

    display(trs_accounts);
    deposit(trs_accounts, 3000);
    display(trs_accounts);
    withdraw(trs_accounts, 2000);


    Trust_Account test_acc {"Bruce", 1500, 1};
    test_acc.deposit(100);
    test_acc.deposit(550);

    Trust_Account test_acc2 {"Bruce", 1500, 1};
    test_acc2.withdraw(100);
    test_acc2.withdraw(550);
    test_acc2.withdraw(200);
    test_acc2.withdraw(100);
}

