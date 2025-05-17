#pragma once

#include <iostream>

using namespace std;

class Student {

private:
    int id;
    string name;
    int examScore;

public:
    Student(int _id, string _name, int _examScore);
    void setId(int _id);
    void setName(string _name);
    void setExamScore(int _examScore);
    int getId();
    string getName();
    int getExamScore();
    void printInfo();
};
