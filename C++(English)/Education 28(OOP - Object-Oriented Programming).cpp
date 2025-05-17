#include <iostream>
#include "Education 28 Car.h"

int main() {
    /*
    car1.color = "black";
    car1.model = "Audi";
    car1.horsePower = 90;

    car2.color = "blue";
    car2.model = "Opel";
    car2.horsePower = 100;
    */
    Car car1("black", "Audi", 90, 4);
    car1.setCarColor("white");

    Car car2("blue", "Opel", 100, 4);
    car2.setModelYear(2020);

    // cout << "Car1 Door Count = " << (car1.pDoorCount) << endl;
    car1.showRegistrationInfo(); cout << endl;

    /*
    car1.showRegistrationInfo();
    cout << endl << endl;
    car2.showRegistrationInfo();

    cout << car1.getCarColor();
    */

    Car* p = new Car("yellow", "BMW", 125, 2);
    p->showRegistrationInfo(); cout << endl;
    /*
    p = &car1;
    p->showRegistrationInfo();

    p = &car2;
    p->showRegistrationInfo();
    */
    /*
    p->setCarColor("white");
    p->showRegistrationInfo();
    */
    cout << "BMW Door Count = " << *(p->pDoorCount) << endl;
    delete p; // Always delete classes created with pointers after use

    cout << endl;
    return 0;
}
