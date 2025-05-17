#pragma once
#include <iostream>
using namespace std;

class Account {
private:
    string name;
    int accountNo;
    float balance;

public:
    Account(string name_, int accountNo_, float balance_);
    void deposit(float amount);
    void withdraw(float amount);
    void showAccountDetails();
};
