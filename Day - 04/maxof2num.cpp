#include <iostream>
using namespace std;

void printMax(int a, int b) {
    if (a > b) {
        cout << "Maximum is: " << a << endl;
    } else {
        cout << "Maximum is: " << b << endl;
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    printMax(x, y);
    return 0;
}