#include <iostream>
using namespace std;

// AUTO USAGE
/*
// Using the auto function in IDEs that support C++ 11:
auto add(int x, int y) -> int {
    return (x + y);
}

// Using the auto function in IDEs that support C++ 14:
auto subtract(int x, int y) {
    return (x - y);
}

int main() {
    auto number = 10; // The variable 'number' is determined as an int
    auto text = "Hello C++"; // string
    auto decimal = 3.14; // double

    cout << "Number = " << number << endl;
    cout << "Text = " << text << endl;
    cout << "Decimal = " << decimal << endl;

    cout << "Addition = " << add(3, 2) << endl;
    cout << "Subtraction = " << subtract(3, 2) << endl;

    auto total = add(10, 20);
    cout << total << endl;

    return 0;
}
*/

// PROGRAMMING QUESTION
/*
#include <iostream>
using namespace std;

int main() {
    int* p = new int(3);
    auto pa = p;

    cout << *pa << std::endl;

    // To prevent memory leaks, we release the allocated memory.
    delete p;

    return 0;
}
*/