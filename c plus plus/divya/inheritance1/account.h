#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
class account
{
public:
    double balance;
    std::string name;
    void deposit (double amount);
    void withdraw (double amount);

    account();
    ~account();

};

#endif // ACCOUNT_H
