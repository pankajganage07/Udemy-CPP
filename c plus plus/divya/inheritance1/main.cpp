#include <iostream>
#include "account.h"

using namespace std;

int main() {
    cout << "\n =====account============="<<endl;
    account acc {};
    acc.deposit(200.00);
    acc.withdraw(300.00);
    
    cout << endl;
    
    account *p_acc {nullptr};
    p_acc = new account();
    p_acc ->deposit(1000.0);
    p_acc ->withdraw(500.0);
    delete p_acc;
    
    //using a saving account class
    
    
    return 0;
}