#include <iostream>
#include "savingacc.h"

using namespace std;
savingacc::savingacc()
  :int_rate{3.0};
{
}

savingacc::~savingacc()
{
}

void savingacc::deposit(double amount) {
    cout <<"saving account called with deposit: "<< amount << endl;
}

void savingacc::withdraw(double amount){
    cout << "saving account called with withdraw: " << amount << endl;
}

