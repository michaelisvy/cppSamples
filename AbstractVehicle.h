#pragma 
#include <string>
using namespace std;

    class AbstractVehicle
    {
    protected:
        string brand;
        int yearOfRegistration;

    public:
        string getString();

        // abstract function
        virtual void makeNoise() = 0;
    };

