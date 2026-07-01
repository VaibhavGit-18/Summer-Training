#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car engine is starting..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();
    return 0;
}