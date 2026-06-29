#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    set<int> s;
    vector<int> cleanArray;
    
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
    }
    
    for (int x : s) {
        cleanArray.push_back(x);
    }
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < cleanArray.size(); i++) {
        cout << cleanArray[i] << " ";
    }
    cout << endl;
    return 0;
}