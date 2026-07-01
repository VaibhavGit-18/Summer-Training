#include <iostream>
using namespace std;

class Animal {
public:
    void display() {
        cout << "I am a generic animal." << endl;
    }
};

class Dog : public Animal {
};

int main() {
    Dog myDog;
    myDog.display();
    return 0;
}