#include <iostream>
using namespace std;

int main() {
    int var;
    cout << "Enter an integer value: ";
    cin >> var;
    
    cout << "Value entered: " << var << endl;
    cout << "Memory address of var: " << &var << endl;
    
    return 0;
}