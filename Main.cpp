#include "Main.h"

#include <iostream>
#include "Car.h"

using namespace std;



/*namespace vehicles {

    int main(int argc,char **argv)
    {
        Car car("Tesla", 2022, true);
        
        cout << car.getString();
        //car.makeNoise();

        return 0;
    }
}*/

int main()
{
     Car car("Tesla", 2022, true);
        
        cout << car.getString();
        car.makeNoise();

        return 0;
}