#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> v;
    vector<int> unique_v;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    
    for (int i = 0; i < v.size(); i++) {
        bool isDuplicate = false;
        for (int j = 0; j < unique_v.size(); j++) {
            if (v[i] == unique_v[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unique_v.push_back(v[i]);
        }
    }
    
    cout << "Vector without duplicates: ";
    for (int i = 0; i < unique_v.size(); i++) {
        cout << unique_v[i] << " ";
    }
    cout << endl;
    
    return 0;
}