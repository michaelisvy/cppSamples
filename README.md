# Running on VS Code on Macbook
```
g++ Car.cpp Main.cpp AbstractVehicle.cpp
./a.out
```

# Running on VS Code on Windows
```
g++ Car.cpp Main.cpp AbstractVehicle.cpp
./a.exe
```

# abstract method in C++
Inside `AbstractVehicle.h`
```
class AbstractVehicle
{
    public:
        virtual void makeNoise() = 0;
};
```

Inside `Car.h`
```
class Car : public AbstractVehicle {

    public:
        void makeNoise() override;
    };
```

Inside `Car.cpp`
```
void Car::makeNoise() {
        cout << "\n vroum";
}
```
