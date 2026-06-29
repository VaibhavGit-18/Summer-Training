#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    map<char, int> m;
    for (char c : str) {
        m[c]++;
    }
    
    bool found = false;
    for (char c : str) {
        if (m[c] == 1) {
            cout << "First non-repeating character: " << c << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "No non-repeating character found." << endl;
    }
    
    return 0;
}