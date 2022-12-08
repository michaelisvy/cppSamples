#include "Main.h"

#include <iostream>
#include "Car.h"

using namespace std;




int main()
{
    Car car("Tesla", 2022, true);

    cout << car.getString();

    return 0;
}
