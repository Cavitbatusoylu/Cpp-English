#include <iostream>
#include <vector>
using namespace std;

// VECTOR OPERATIONS
/*
int main() {
    vector<int> vNumbers;
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);

    cout << "Vector Size = " << vNumbers.size() << endl;

    for (size_t i = 0; i < vNumbers.size(); i++)
    {
        cout << "Element " << i << ": " << vNumbers[i] << endl; // Alternative usage = vNumbers.at(i)
    }

    vNumbers[1] = 20;
    cout << endl << vNumbers[1] << endl;

    // vNumbers.insert(vNumbers.begin() + 2, 15); // Insert 15 at the second position
    for (const int& num : vNumbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // Remove the last element:
    // vNumbers.pop_back();

    // Remove a specific element:
    // vNumbers.erase(vNumbers.begin() + 1); // Remove the second element

    // Clear the vector:
    // vNumbers.clear(); // Remove all elements

    cout << endl << endl;

    // Fill a vector with an initial value
    vector<int> myVector(10, -1);

    for (const int& num : myVector)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
*/

// CLASS AND VECTOR USAGE
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    void printInfo() const {
        cout << "Brand = " << brand << ", Model = " << model << ", Year = " << year << endl;
    }
};

int main() {
    // Creating a vector to store car objects
    vector<Car> vGarage;

    cout << "Adding cars to the garage...\n";
    vGarage.push_back(Car("Toyota", "Corolla", 2020));
    vGarage.push_back(Car("BMW", "M5", 2018));
    vGarage.push_back(Car("Mercedes", "C200", 2023));

    // Listing cars in the garage
    cout << "\nCars in the Garage:\n";
    cout << "- - - - - - - - - - - - \n";
    for (const Car& car : vGarage) {
        car.printInfo();
    }

    // Removing a car from the garage
    cout << "\nA car is being removed from the garage...\n";
    vGarage.erase(vGarage.begin() + 1);

    // Listing cars in the garage
    cout << "\nCars in the Garage:\n";
    cout << "- - - - - - - - - - - - \n";
    for (const Car& car : vGarage) {
        car.printInfo();
    }

    // Adding a new car to the garage
    cout << "\nA new car is being added to the garage...\n";
    vGarage.push_back(Car("Ford", "Focus", 2019));

    // Listing cars in the garage
    cout << "\nCars in the Garage:\n";
    cout << "- - - - - - - - - - - - \n";
    for (const Car& car : vGarage) {
        car.printInfo();
    }

    cout << "\nInformation of the first car in the garage = \n";
    vGarage[0].printInfo();

    cout << "\nInformation of the last car in the garage = \n";
    vGarage[vGarage.size() - 1].printInfo();

    return 0;
}
