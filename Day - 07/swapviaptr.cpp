#include <iostream>
using namespace std;

void swapValues(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    
    swapValues(&a, &b);
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}