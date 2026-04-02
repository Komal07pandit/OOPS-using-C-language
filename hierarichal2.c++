#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void fuelType() {
        cout << "Car uses petrol/diesel" << endl;
    }
};

class Bike : public Vehicle {
public:
    void type() {
        cout << "Bike is two-wheeler" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.start();
    c.fuelType();

    b.start();
    b.type();

    return 0;
}