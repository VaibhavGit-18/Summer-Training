#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    set<int> uniqueElements;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        uniqueElements.insert(val);
    }
    
    cout << "Unique Elements: ";
    for (int x : uniqueElements) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}