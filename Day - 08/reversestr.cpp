#include <iostream>
#include <string>
using namespace std;

void printReverse(string s, int index) {
    if (index < 0) {
        return;
    }
    cout << s[index];
    printReverse(s, index - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Reversed: ";
    printReverse(str, str.length() - 1);
    cout << endl;
    
    return 0;
}