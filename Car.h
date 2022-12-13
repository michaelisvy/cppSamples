#pragma once


#include <iostream>
#include <string>
#include "AbstractVehicle.h"
using namespace std;

    class Car : public AbstractVehicle {

    private:
        bool isTaxi;

    public:
        Car(string brand, int p_yearOfRegistration, bool isTaxi);

        string getString();

        void makeNoise() override;

        ~Car();
    };

