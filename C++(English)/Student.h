#pragma once
#include <iostream>
using namespace std;

class Student {
private:
    int grade1;
    int grade2;
    string name;

public:
    Student(string _name, int _grade1, int _grade2);
    friend class Calculator;
};
