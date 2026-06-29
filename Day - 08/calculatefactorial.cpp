#include <iostream>
using namespace std;

int getFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * getFactorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    cout << "Factorial of " << num << " is " << getFactorial(num) << endl;
    return 0;
}