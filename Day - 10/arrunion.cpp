#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    set<int> unionSet;
    
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements: ";
    for (int i = 0; i < n1; i++) {
        int val;
        cin >> val;
        unionSet.insert(val);
    }
    
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements: ";
    for (int i = 0; i < n2; i++) {
        int val;
        cin >> val;
        unionSet.insert(val);
    }
    
    cout << "Union: ";
    for (int x : unionSet) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}