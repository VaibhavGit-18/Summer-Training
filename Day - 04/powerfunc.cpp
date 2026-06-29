#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int b, e;
    cout << "Enter base and exponent: ";
    cin >> b >> e;
    
    cout << b << "^" << e << " = " << power(b, e) << endl;
    return 0;
}