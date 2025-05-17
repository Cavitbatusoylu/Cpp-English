#include "Education 28 Car.h"

// Car Constructor
Car::Car(string _color, string _model, int _horsePower, int doors) {
    cout << "Constructor Called" << endl;
    color = _color;
    model = _model;
    horsePower = _horsePower;
    pDoorCount = new int(doors); // Assigns the door count dynamically
}

// Car Destructor
Car::~Car() {
    cout << Car::color << " Object Destructor Called" << endl;
}

void Car::showRegistrationInfo() {
    cout << "Model: " << Car::model << endl;
    cout << "Color: " << Car::color << endl;
    cout << "Horse Power: " << Car::horsePower << endl;
    cout << "Door Count = " << Car::pDoorCount << endl;
}

void Car::setModelYear(int _year) {
    modelYear = _year;
}

int Car::getModelYear() {
    return modelYear;
}

void Car::setCarColor(string _color) {
    color = _color;
}

string Car::getCarColor() {
    return color;
}

void Car::setCarModel(string _model) {
    model = _model;
}

string Car::getCarModel() {
    return model;
}

void Car::setCarHorsePower(int _horsePower) {
    horsePower = _horsePower;
}

int Car::getCarHorsePower() {
    return horsePower;
}
