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
    
    int max_val = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max_val) {
            max_val = v[i];
        }
    }
    
    cout << "Maximum element: " << max_val << endl;
    return 0;
}