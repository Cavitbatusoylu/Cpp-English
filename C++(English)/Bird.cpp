#include "Bird.h"

// Constructor
Bird::Bird(string name) : Animal(name) {
    // Additional operations can be added here...
}

void Bird::fly() {
    cout << Animal::getName() << " is flying! " << endl;
    //  cout << Animal::name << " is flying! " << endl;(protected:)
}
