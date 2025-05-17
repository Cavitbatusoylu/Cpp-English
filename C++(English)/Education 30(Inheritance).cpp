#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Bird.h"
using namespace std;

int main() {

    Animal a("Karabas");
    a.feed();
    a.sleep();

    Cat cat("Tekir");
    cat.feed();
    cat.sleep();
    cat.catchMouse();

    Bird bird("Boncuk");
    bird.feed();
    bird.sleep();
    bird.fly();

    Dog dog("Alpha");
    dog.feed();
    dog.sleep();
    dog.bark();

    Dog dog2("Beta");
    Dog dog3("Omega");

    Dog* dp = new Dog("Golden");

    cout << "Number of Dogs = " << Dog::getDogCount() << endl;

    delete dp;

    cout << "Number of Dogs = " << Dog::getDogCount() << endl;

    cout << "Square of 5 = " << Dog::calculateSquare(5) << endl;

    cout << endl;
    return 0;
}
