// Section 15
// Challenge 

#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "checking_account.h"

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
    
    
    // checking account
    
    vector<checking_account> check_accounts;
    check_accounts.push_back(checking_account {} );
    check_accounts.push_back(checking_account {"krick"} );
     check_accounts.push_back(checking_account {"spock", 2000} );
     check_accounts.push_back(checking_account {"bones", 5000} );
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
   

    return 0;
}

