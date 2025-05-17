#pragma once
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string name);
    void feed();
    void sleep();
    void setName(string name);
    string getName();

private:
    string name;

    // protected: (affects subclasses)
    //    string name;
};
