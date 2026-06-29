#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    map<int, int> freq;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }
    
    cout << "Frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " occurs " << it.second << " times\n";
    }
    
    return 0;
}