#include <iostream>
using namespace std;

class Car {
public:
    static int count;

    Car() {
        count++;
    }
};

int Car::count = 0;

int main() {
    Car c1;
    Car c2;
    Car c3;

    cout << "Total Car objects created: " << Car::count << endl;

    return 0;
}