#include "account.h"
#include <iostream>



    // Parameterized constructor.
    // Initialize 'balance' with the provided 'initialBalance'.
    

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





