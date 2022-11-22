#ifndef SAVINGACC_H
#define SAVINGACC_H
#include "account.h"

class savingacc: public account
{
public:
    double int_rate;
    void deposit(double amount);
    void withdraw(double amount);
    savingacc();
    ~savingacc();

};

#endif // SAVINGACC_H
