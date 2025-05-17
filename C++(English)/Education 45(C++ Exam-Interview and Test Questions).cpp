// Exam-Interview Question 1
/*
#include <iostream>
using namespace std;

int main() {
    int x = 1;

    do {
        x++;
        cout << "*";
    } while (x++ < 5);

    cout << endl << "x: " << x << endl; // 7
    return 0;
}
*/

// Exam-Interview Question 2
/*
#include <iostream>
using namespace std;

int main() {
    int x = 1;

    do {
        x++;
        cout << "*";
    } while (++x < 5);

    cout << endl << "x: " << x << endl; // 5
    return 0;
}
*/

// Exam-Interview Question 3
/*
#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = 5;
    int* p1;
    int* p2;

    p1 = &x;
    p2 = &y;
    y = y + 3;
    *p1 = *p1 + 3;
    *p1 = *p2 * *p1;
    cout << x;

    cout << endl;
    return 0;
}
*/

// Exam-Interview Question 4
/*
#include <iostream>
using namespace std;

// Write a FUNCTION that calculates the square of numbers divisible by 2 in a one-dimensional integer array
// and replaces those numbers with their squared values (modifies the array).
// Print the final array to the screen.

// Example:
// array = {2, 7, 12}
// After function call:
// array = {4, 7, 144}

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = arr[i] * arr[i];
    }
}

int main() {
    int array[] = { 2,7,10,5,10,1,3 };
    int size = sizeof(array) / sizeof(array[0]);
    modifyArray(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }

    cout << endl;
    return 0;
}
*/

// Test Question 1
/*
#include <iostream>
using namespace std;

int characterCount(char array[]) {
    cout << "sizeof: " << sizeof(array) << endl;
    return strlen(array);
}

int main() {
    char str[] = "Hello this is a test string with different lengths";
    int length = characterCount(str);
    cout << "String length: " << length << endl;
    return 0;
}
*/

// Test Question 2
/*
#include <iostream>
using namespace std;

void update(int& a) {
    a++;
}

int main() {
    int number = 5;
    update(number);
    cout << "Number: " << number << endl;
    return 0;
}
*/

// HACKERRANK Pointer + Array + Loop Comprehensive Question & Solution
/*
#include <iostream>
using namespace std;

// Coding Question:
//
// Get N integers from the user and print them in reverse order.
//
// Example:
// // User first enters how many integers to input:
// > 5
// Then enters those integers:
// > 4 7 1 2 9
// The program prints them in reverse order:
// > 9 2 1 7 4

int main() {
    int n;
    cin >> n;
    int* array = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    delete[] array;
    return 0;
}
*/

// Exam-Interview Question 6
/*
#include <iostream>
using namespace std;

// Base class
class Animal {

public:
    virtual void makeSound() {
        cout << "Animal makeSound function called\n";
    }

    void feed() {
        cout << "Animal class feed method called\n";
    }
};

// Child class : Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow meow..\n";
    }

    void feed() {
        cout << "Cat is being fed with milk\n";
    }
};

// Child class : Bird
class Bird : public Animal {
public:
    void makeSound() {
        cout << "Chirp chirp..\n";
    }

    void feed() {
        cout << "Bird is being fed with seeds..\n";
    }
};

int main()
{
    Animal* pAnimal;
    Bird chirpy;
    Cat fluffy;

    cout << "1:\n";
    fluffy.feed();
    fluffy.makeSound();

    cout << "2:\n";
    pAnimal = &chirpy;
    pAnimal->feed();
    pAnimal->makeSound();
}
*/

// Exam-Interview Question 7
/*
#include <iostream>
using namespace std;

// Base class
class