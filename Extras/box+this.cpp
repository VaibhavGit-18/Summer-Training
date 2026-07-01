#include <iostream>
using namespace std;

class Box {
    int length;

public:
    void setLength(int length) {
        this->length = length;
    }

    void displayLength() {
        cout << "Length of the Box is: " << length << endl;
    }
};

int main() {
    Box b;
    int l;

    cout << "Enter length of the box: ";
    cin >> l;

    b.setLength(l);
    b.displayLength();

    return 0;
}