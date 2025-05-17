#pragma once
#include <iostream>
using namespace std;

class Car {
public:
    // Constructor
    Car(string _color, string _model, int _horsePower, int doors);

    // Destructor
    ~Car();

    void showRegistrationInfo();
    void setModelYear(int _year);
    int getModelYear();
    void setCarColor(string _color);
    string getCarColor();
    void setCarModel(string _model);
    string getCarModel();
    void setCarHorsePower(int _horsePower);
    int getCarHorsePower();

    int* pDoorCount;

private:
    string color;
    string model;
    int horsePower;
    int modelYear;
};
