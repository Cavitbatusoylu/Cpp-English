#include <iostream>
using namespace std;

class Staff {
private:
    string staffType;
    double salaryCoefficient;

public:
    // Parameterless (Empty) Constructor
    /*
    Staff() {
        // Default values are assigned here
        staffType = "standard";
        salaryCoefficient = 1.0;
    }*/

    Staff(string type = "standard", double coefficient = 1.0) : staffType(type), salaryCoefficient(coefficient) {}

    Staff(string type, double coefficient) {
        staffType = type;
        salaryCoefficient = coefficient;
    }

    void print() {
        cout << "Staff Type = " << staffType << " | Salary Coefficient = " << salaryCoefficient << endl;
    }
};

int main() {
    Staff s1;
    s1.print();
    Staff s2("Expert", 1.5);
    s2.print();
    return 0;
}
