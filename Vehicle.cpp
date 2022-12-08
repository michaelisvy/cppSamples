#include "Vehicle.h"
#include <string>
using namespace std;

std::string Vehicle::getString() {
    return "Brand: " + this->brand + " Year: " + to_string(this->yearOfRegistration);
}
