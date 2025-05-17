#include <iostream>
#include "Student1.h"

using namespace std;

Student::Student(int _id, string _name, int _examScore) {
    id = _id;
    name = _name;
    examScore = _examScore;
}

void Student::setId(int _id) {
    id = _id;
}

void Student::setName(string _name) {
    name = _name;
}

void Student::setExamScore(int _examScore) {
    examScore = _examScore;
}

int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

int Student::getExamScore() {
    return examScore;
}

void Student::printInfo() {
    cout << "ID: " << id << " Name: " << name << " Exam Score: " << examScore << endl;
}
