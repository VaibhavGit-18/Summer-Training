#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> v;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    
    int min_val = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] < min_val) {
            min_val = v[i];
        }
    }
    
    cout << "Minimum element: " << min_val << endl;
    return 0;
}