#include "Cat.h"

// Constructor
Cat::Cat(string name) : Animal(name) {
    // Additional operations can be added here...
}

void Cat::catchMouse() {
    cout << Animal::getName() << " is catching a mouse! " << endl;
    //  cout << Animal::name << " is catching a mouse! " << endl; (protected:)
}
