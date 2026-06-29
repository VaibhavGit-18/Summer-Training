#include <iostream>
using namespace std;

int getSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Sum is: " << getSum(num1, num2) << endl;
    return 0;
}