#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of elements: ";
    cin >> n;
    
    set<int> s;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
    }
    
    cout << "Total distinct elements: " << s.size() << endl;
    return 0;
}