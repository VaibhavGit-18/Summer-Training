#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> original;
    vector<int> reversed;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        original.push_back(val);
    }
    
    while (original.size() > 0) {
        reversed.push_back(original.back());
        original.pop_back();
    }
    
    cout << "Reversed Vector: ";
    for (int i = 0; i < reversed.size(); i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;
    
    return 0;
}