#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, float, greater<int>> studentGrades; // greater (sorting in descending order)

    // Adding entries
    studentGrades[101] = 85.5;
    studentGrades[102] = 90.3;
    studentGrades[100] = 78.8;

    // Adding using insert
    studentGrades.insert({ 104, 92.4 });

    // Listing entries
    cout << "\nStudent Numbers and Grade Averages\n";
    // Introduced with C++11, type inference allows the variable type to be automatically determined
    for (const auto& student : studentGrades) {
        cout << "Student No: " << student.first << ", Grade Average: " << student.second << endl;
    }

    // Search operation
    int searchStudentNo = 100;
    if (studentGrades.find(searchStudentNo) != studentGrades.end()) {
        cout << "\nStudent No " << searchStudentNo << " has a grade average of: " << studentGrades[searchStudentNo];
    }
    else {
        cout << "\nStudent No " << searchStudentNo << " is not present in the map!\n";
    }

    // Deletion operation
    studentGrades.erase(102);
    cout << "Student No 102 has been removed...\n";
    cout << "\nStudent Numbers and Grade Averages\n";
    for (const auto& student : studentGrades) {
        cout << "Student No: " << student.first << ", Grade Average: " << student.second << endl;
    }

    return 0;
}
