#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    int len, wid;

    cout << "Enter length: ";
    cin >> len;
    cout << "Enter width: ";
    cin >> wid;

    r.setData(len, wid);
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}