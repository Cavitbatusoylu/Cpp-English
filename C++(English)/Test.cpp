#include <iostream>
#include "ErrorClass.h"
using namespace std;

class ErrorClass {
private:
    string errorMessage;
public:
    ErrorClass(string _errorMessage) {
        errorMessage = _errorMessage;
    }
    string getErrorMessage() {
        return errorMessage;
    }
};

int main() {
    try {
        int x;
        cout << "Enter a value for x: ";
        cin >> x;
        if (x < 0)
            throw ErrorClass("Error Message No:1");
        else if (x == 0)
            throw 101;
        cout << "Try block ends... x = " << x << endl;
    }
    catch (ErrorClass e) {
        cout << "Exception caught! Custom error message = " << e.getErrorMessage() << endl;
    }
    catch (int errorCode) {
        cout << "Exception caught! Error code = " << errorCode << endl;
    }
    catch (...) {
        cout << "Exception caught!\n";
    }

    cout << "bye...\n";
    return 0;
}
