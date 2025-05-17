#include "ErrorClass.h"
using namespace std;

ErrorClass::ErrorClass(string _errorMessage) {
    errorMessage = _errorMessage;
}

string ErrorClass::getErrorMessage() {
    return errorMessage;
}
