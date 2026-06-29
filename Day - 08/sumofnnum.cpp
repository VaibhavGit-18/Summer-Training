#include <iostream>
using namespace std;

int recursiveSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + recursiveSum(n - 1);
}

int main() {
    int num;
    cout << "Enter N: ";
    cin >> num;
    
    cout << "Sum up to " << num << " is: " << recursiveSum(num) << endl;
    return 0;
}