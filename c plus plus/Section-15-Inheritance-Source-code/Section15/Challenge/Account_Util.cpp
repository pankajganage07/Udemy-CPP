#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects 
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

//helper funtions for checking account class

//display cheacking account object in vector of cheacking account object
void display(const std::vector<checking_account> &accounts){
    std::cout << "\n=== checking account ============================" <<std::endl;
    for(auto &acc:accounts)
        std::cout <<acc<<std::endl;
    
}

//deposit supplied amount to each checking account in vector
void deposit(std::vector<checking_account> &accounts, double amount){
    std::cout<<"\n=== deposit to checking account ===========================" <<std::endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout <<"amount deposited in checking account" <<std::endl;
        else
            std::cout<<"deposit failed in checking account" <<std::endl;
    
    }
    
    
}

//withdraw supplied amount from each checking account in vector
void withdraw(std::vector<checking_account> &accounts, double amount){
    std::cout <<"\n=== withdraw from checking account======================"<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount))
            std::cout<<"withdrawal sucessfull "<<std::endl;
        else
             std::cout<<"withdrawal failed" <<std::endl;    
    } 
}