#include "account.h"
#include <iostream>


    // Default constructor.
    // Initialize 'balance' to 0.
    Account::Account(){
        balance = 0;
    }

    // Parameterized constructor.
    // Initialize 'balance' with the provided 'balance'.
    Account::Account(double balance){
        this->balance = balance;
    }

    // Getter function to return the current balance.
    double Account::getBalance(){
        return balance;
    }

    // Setter function to set the balance to a new value.
    void Account::setBalance(double newBalance){
        if (newBalance < 0){
            cout <<"you cannot set account balance to a negative value" <<endl;
        }
        balance = newBalance;
    }

    // Function to deposit an amount into the account.
    void Account::deposit(double amount){
        balance += amount;
    }

    // Function to withdraw an amount from the account.
    void Account::withdraw(double amount){
        if (balance - amount <0){
            cout << "Insufficient funds!" <<endl;
            return;
        }
        balance -= amount;
    }

    Account::~Account(){
        cout << "Account with balance " << balance << " is being destroyed." <<endl;
    }





