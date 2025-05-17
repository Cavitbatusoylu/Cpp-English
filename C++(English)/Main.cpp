#include <iostream>
#include "Student.h"
#include "Main.h"
#include <list>

using namespace std;

void showMenu() {
    cout << " * * * * * * * * *\n";
    cout << " *               *\n";
    cout << " *      MENU     *\n";
    cout << " *               *\n";
    cout << " * * * * * * * * *\n";
    cout << "1. Add New Record\n";
    cout << "2. Show Entire List\n";
    cout << "3. Delete Record by Student ID\n";
    cout << "4. Search Student\n";
    cout << "5. Exit\n";
}

void addStudent(list<Student>* lst) {
    int id;
    string firstName, lastName, fullName;
    int examScore;
    cout << "Please enter student ID: ";
    cin >> id;
    cout << "Enter first name: ";
    cin >> firstName >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Enter exam score: ";
    cin >> examScore;
    Student student(id, fullName, examScore);
    lst->push_back(student);
}

void showList(list<Student>* lst) {
    list<Student>::iterator it;
    cout << endl << "- - - - Student List - - - -\n";
    for (it = lst->begin(); it != lst->end(); it++) {
        it->printInfo();
    }
    cout << endl;
}

void deleteStudent(list<Student>* lst) {
    int id;
    cout << "Please enter the ID of the student to be deleted: ";
    cin >> id;
    list<Student>::iterator it;
    for (it = lst->begin(); it != lst->end(); it++) {
        if (it->getId() == id)
            break;
    }
    if (it == lst->end())
        cout << "The specified ID could not be found, deletion failed!";
    else
        lst->erase(it);
}

void searchStudent(list<Student>* lst) {
    int id;
    cout << "Please enter the ID of the student to search: ";
    cin >> id;
    list<Student>::iterator it;
    for (it = lst->begin(); it != lst->end(); it++) {
        if (it->getId() == id)
            break;
    }
    if (it == lst->end())
        cout << "The specified ID could not be found!";
    else {
        cout << endl << "The details of the searched student: \n";
        it->printInfo();
        cout << endl;
    }
}

int main() {
    list<Student>* studentList = new list<Student>();

    int choice = 0;
    do {
        showMenu();
        cout << "Your choice: ";
        cin >> choice;
        if (choice == 1)
            addStudent(studentList);
        else if (choice == 2)
            showList(studentList);
        else if (choice == 3)
            deleteStudent(studentList);
        else if (choice == 4)
            searchStudent(studentList);
        else if (choice == 5)
            break;
        else
            cout << "Invalid selection, please try again!\n";

    } while (choice != 5);

    delete studentList;

    return 0;
}
