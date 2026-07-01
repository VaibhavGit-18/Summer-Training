#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "Displaying generic shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() override {
        cout << "Displaying rectangle shape." << endl;
    }
};

int main() {
    Rectangle r;
    r.display();
    return 0;
}