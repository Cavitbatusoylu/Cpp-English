#include <iostream>
using namespace std;

int main() {
    // Try-Catch Usage
    /*
    try {
        int age;
        cout << "Your age = ";
        cin >> age;
        if (age >= 18) {
            cout << "Access granted - you are old enough";
        }
        else {
        throw(age);
        return -1;
        }
    }
    catch (int errorNo) {
        cout << "Access denied, you must be at least 18 years old!\n";
        cout << "Your age = " << errorNo;
    }
    */

    try {
        int x = 30;
        int y;
        cout << "Please enter a positive number = ";
        cin >> y;

        if (y == 0)
            throw 100;
        else if (y < 0)
            throw 101;
        else {
            int z = x / y;
            cout << z << endl;
        }
    }
    catch (int errorCode) {
        // cout << "An exception occurred, error code:" << errorCode << endl;
        if (errorCode == 101) {
            cout << "Negative value detected!";
            return -1;
        }
        else if (errorCode == 100)
            cout << "Zero value detected!";
    }

    cout << "\bye..\n";
    return 0;
}
