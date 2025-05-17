#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    /*
    Name: Cavit Batu Soylu
    Account No: 16062006
    Balance: 1000.75
    */

    Account account1 = Account("Cavit Batu Soylu", 16062006, 1000.75);
    Account account2 = Account("Enes Kaya", 6082005, 2000.50);

    account1.deposit(200);
    account1.withdraw(100);
    account1.showAccountDetails();

    account2.showAccountDetails();

    try {
        account2.withdraw(100);
    }
    catch (exception e) {
        cout << e.what();
    }

    cout << endl;
    return 0;
}
