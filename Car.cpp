#include <iostream>
#include <string>
#include "Car.h"
using namespace std; 

    Car::Car(string p_brand, int p_yearOfRegistration, bool p_isTaxi) {
    brand = p_brand;
    yearOfRegistration = p_yearOfRegistration;
    isTaxi = p_isTaxi;
}

    string Car::getString() {
        return AbstractVehicle::getString() + " is Taxi " + to_string(isTaxi);
    }

    void Car::makeNoise() {
        cout << "\n vroum";
    }

    Car::~Car()
    {
        cout << "\n Destructor executed";
    }