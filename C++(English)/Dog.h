#pragma once
#include "Animal.h"

class Dog : public Animal {

public:
    Dog(string name);
    ~Dog();
    void bark();
    static int getDogCount() {
        return dogCount;
    }
    static int calculateSquare(int x);

private:
    static int dogCount;
};
