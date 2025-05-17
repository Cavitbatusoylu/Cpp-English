#include "Dog.h"

int Dog::dogCount = 0;

// Constructor
Dog::Dog(string name) : Animal(name) {
    // Additional operations can be added here...
    dogCount++;
}

// Destructor
Dog::~Dog() {
    dogCount--;
}

void Dog::bark() {
    cout << Animal::getName() << " is barking! " << endl;
    //  cout << Animal::name << " is barking! " << endl;(protected:)
}

int Dog::calculateSquare(int x) {
    return (x * x);
}
