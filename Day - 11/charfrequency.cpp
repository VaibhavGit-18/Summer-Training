#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    map<char, int> charFreq;
    for (char c : s) {
        charFreq[c]++;
    }
    
    cout << "Character Frequencies:\n";
    for (auto it : charFreq) {
        cout << it.first << " - " << it.second << endl;
    }
    
    return 0;
}