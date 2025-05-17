#include <iostream>
using namespace std;

// LAMBDA CAPTURE
/*
int main() {
    int count = 0;

    //[&] => Captures all external variables by reference
    //[=] => Captures all external variables by copy (count variable is copied)
    auto increment = [=]() mutable {
        int x = 10;
        count = count + x; // This count is the copy inside the lambda
        cout << "Count inside Lambda = " << count << endl;
    }; // <-- Missing semicolon fixed

    // Call the lambda multiple times
    increment();
    increment();
    increment();

    cout << "Original count = " << count << endl;

    return 0;
}
*/

// RETURN TYPE IN LAMBDA EXPRESSIONS
/*
int main() {

    auto mixedLambda = [](bool condition) {
        if (condition){
            return 42.1;
        }
        else{
            return 14.0;
        }
    };

    cout << mixedLambda(true);

    return 0;
}
*/

// LAMBDA EXPRESSION EXAMPLE
/*
void printToScreen() {

    auto mixedLambda = [](bool condition) {
        if (condition) {
            return 42.1;
        }
        else {
            return 14.0;
        }
    };

    cout << mixedLambda(true);
}

int main() {
    printToScreen();
    return 0;
}
