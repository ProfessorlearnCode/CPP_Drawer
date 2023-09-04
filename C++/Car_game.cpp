#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name;

public:
    Vehicle(string name) : name(name) {}

    virtual void move() = 0;
};

class Car : public Vehicle {
public:
    Car(string name) : Vehicle(name) {}

    void move() override {
        cout << name << " is driving on roads." << endl;
    }
};

class Truck : public Vehicle {
public:
    Truck(string name) : Vehicle(name) {}

    void move() override {
        cout << name << " is driving and towing heavy loads." << endl;
    }
};

class Airplane : public Vehicle {
public:
    Airplane(string name) : Vehicle(name) {}

    void move() override {
        cout << name << " is flying in the sky." << endl;
    }
};

int main() {
    Car car("Sports Car");
    Truck truck("Pickup Truck");
    Airplane airplane("Jet Plane");

    car.move();
    truck.move();
    airplane.move();

    return 0;
}
