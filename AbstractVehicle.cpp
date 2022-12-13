#include "AbstractVehicle.h"
#include <string>
#include <iostream>
using namespace std;

string AbstractVehicle::getString() {
    return "Brand: " + this->brand + " Year: " + to_string(this->yearOfRegistration);
}

