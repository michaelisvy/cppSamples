#pragma once


#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;


class Car : public Vehicle {

    private:
        bool isTaxi;

    public:
        Car(string brand, int p_yearOfRegistration, bool isTaxi);

        string getString();

        ~Car();
};

