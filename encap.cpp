#include<iostream>
using namespace std;


class BankAccount {
    private:
        string accountHolder;
        double balance;

    public:
     // constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = (initialBalance > 0) ? initialBalance : 0;
    }


    // If we want to access/chagne private data, we will use getter and setter
    // account holder getter, setter
    string getAccountHolder() {
        return accountHolder;
    }

    void setAccountHolder(string name) {
        accountHolder = name;
    }

    // getter and setter for balance
    double getBalance() {
        return balance;
    }

    void setBalance(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = initialBalance;
        }
    }

    // deposit and withdraw functions
    // deposit money in our account
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid amount";
        }
    }

    // withdraw
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    // display
    void display() {
        cout << "Balance is : " << balance << endl;
    }


};


int main() {
    BankAccount myAccount("maha", 1000);
    string name = myAccount.getAccountHolder();
    cout << "account: " << name;
    cout << endl;
    myAccount.deposit(500);
    myAccount.withdraw(300);
    myAccount.display();
    cout << endl;
    return 0;
}