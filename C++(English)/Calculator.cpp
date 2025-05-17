#include <iostream>
#include "Student.h"
using namespace std;

class Calculator {
public:
    void calculateAverage(Student student) {
        int average = (student.grade1 + student.grade2) / 2;
        cout << student.name << "'s grade average = " << average << endl;
    }
};

int main() {
    Student student1("Ali", 70, 80);
    Student student2("Veli", 90, 100);
    Calculator calculator;
    calculator.calculateAverage(student1);
    calculator.calculateAverage(student2);
}
