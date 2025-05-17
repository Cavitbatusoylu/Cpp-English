#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    int employeeNo;
    string name;
    string position;

public:
    Employee(int no, string fullName, string role) {
        employeeNo = no;
        name = fullName;
        position = role;
    }

    int getEmployeeNo() const { return employeeNo; }
    string getName() const { return name; }
    string getPosition() const { return position; }

    void print() const {
        cout << "Employee No: " << employeeNo << " | Name: " << name << " | Position: " << position << endl;
    }
};

void addEmployee(vector<Employee>& employees) {
    int no;
    string name, position;

    cout << "Employee No: ";
    cin >> no;
    cin.ignore(); // Cleans new line character '\n'

    cout << "Name (Full Name): ";
    getline(cin, name);

    cout << "Position: ";
    getline(cin, position);

    employees.emplace_back(no, name, position);
    cout << "Employee successfully added.\n";
}

void listEmployees(const vector<Employee>& employees) {
    if (employees.empty()) {
        cout << "Employee List is Empty!\n";
        return;
    }

    cout << "\n---- Employee List ----\n";
    for (const auto& employee : employees) {
        employee.print();
    }
}

void searchEmployee(const vector<Employee>& employees) {
    int no;
    cout << "Enter the employee number you want to search: ";
    cin >> no;

    for (const auto& employee : employees) {
        if (employee.getEmployeeNo() == no) {
            cout << "\nThe employee you searched for exists in the system, details:\n";
            employee.print();
            return;
        }
    }
    cout << "Employee not found!\n";
}

void deleteEmployee(vector<Employee>& employees) {
    int no;
    cout << "Enter the employee number you want to delete: ";
    cin >> no;

    for (auto it = employees.begin(); it != employees.end(); it++) {
        if (it->getEmployeeNo() == no) {
            employees.erase(it);
            cout << "Employee successfully deleted...\n";
            return;
        }
    }
    cout << "Employee not found!\n";
}

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n---- Employee Management Selection ----\n";
        cout << "1. Add Employee\n";
        cout << "2. List Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Please make your selection: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addEmployee(employees);
            break;
        case 2:
            listEmployees(employees);
            break;
        case 3:
            searchEmployee(employees);
            break;
        case 4:
            deleteEmployee(employees);
            break;
        case 5:
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid selection, please choose between 1-5!\n";
        }

    } while (choice != 5);

    return 0;
}
