#include<iostream>
using namespace std;
class BankAccount {
    private:
    double balance;
    public:
    BankAccount(double initialBalance){
        balance = initialBalance;
    }
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
        } else {

        }
        }
    }
