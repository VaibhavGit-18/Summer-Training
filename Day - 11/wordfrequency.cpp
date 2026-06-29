#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);
    
    stringstream ss(line);
    string w;
    map<string, int> wordMap;
    
    while (ss >> w) {
        wordMap[w]++;
    }
    
    cout << "Word Frequencies:\n";
    for (auto it : wordMap) {
        cout << it.first << " : " << it.second << endl;
    }
    
    return 0;
}