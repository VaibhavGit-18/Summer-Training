#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str, word;
    int count = 0;
    
    cout << "Enter a sentence: ";
    getline(cin, str);
    
    stringstream ss(str);
    while (ss >> word) {
        count++;
    }
    
    cout << "Number of words: " << count << endl;
    return 0;
}