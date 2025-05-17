#include <iostream>
using namespace std;

class Car {
private:
	string brand;

public:
	int year;
	Car(string _brand, int _year) {
		brand = _brand;
		year = _year;
	}
	friend void displayInfo(Car car); // friend function
};

void displayInfo(Car car) {
	cout << car.year << " " << car.brand;
}

int main() {
	Car car1("Opel", 2012);
	displayInfo(car1);
}