#include <iostream>
#include "account.h"

account::account()
         :balance{0.0}, name{"pankaj account"}
{
}

account::~account()
{
}

void account::deposit(double amount){
    std::cout<< "account deposit with: "<< amount <<std:: endl;
}

void account::withdraw (double amount){
    std::cout<< "account withdraw with: "<< amount <<std::endl;
}