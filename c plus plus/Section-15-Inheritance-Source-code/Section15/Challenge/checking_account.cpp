#include "checking_account.h"

checking_account::checking_account(std::string name, double balance)
   :Account {name, balance} 
{
    
}

bool checking_account::withdraw(double amount){
    amount +=per_check_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const checking_account &account){
os << "[checking_account: " << account.name<< ": "<<account.balance << "]";
return os;
}
