#include "Animal.h"

Animal::Animal(string name) {
    Animal::name = name;
}

void Animal::feed() {
    cout << Animal::name << " is feeding..." << endl;
}

void Animal::sleep() {
    cout << Animal::name << " is sleeping..." << endl;
}

void Animal::setName(string name) {
    Animal::name = name;
}

string Animal::getName() {
    return Animal::name;
}
