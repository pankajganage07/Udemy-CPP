
//1.50 per withdrawal


#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"
#include <iostream>
#include <string>

class checking_account: public Account 
{   
    friend std::ostream &operator<<(std::ostream &os, const checking_account &account);
    
private:
    static constexpr double per_check_fee = 1.5;
public:
    checking_account(std:: string name = "unnamed checking account", double balance = 0.0);
    bool withdraw(double);
  

};

#endif // CHECKING_ACCOUNT_H
