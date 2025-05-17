#include "Account.h"

Account::Account(string name_, int accountNo_, float balance_) {
    Account::balance = 0;
    Account::name = name_;
    Account::accountNo = accountNo_;
    Account::balance = balance_;
}

void Account::deposit(float amount) {
    Account::balance = Account::balance + amount;
}

void Account::withdraw(float amount) {
    if (Account::balance < amount) {
        cout << "Insufficient balance!";
        throw exception("Insufficient balance");
    }
    else {
        Account::balance = Account::balance - amount;
    }
}

void Account::showAccountDetails() {
    cout << "Account Holder Name: " << Account::name << endl;
    cout << "Account No: " << Account::accountNo << endl;
    cout << "Account Balance: " << Account::balance << endl << endl;
}
