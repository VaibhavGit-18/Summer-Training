#include <iostream>
using namespace std;

int main() {
    float length, width, area;
    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;
    area = length * width;
    cout << "Area calculated: " << area << endl;
    return 0;
}