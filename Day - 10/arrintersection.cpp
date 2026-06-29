#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    set<int> s1, intersection;
    
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements: ";
    for (int i = 0; i < n1; i++) {
        int val;
        cin >> val;
        s1.insert(val);
    }
    
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements: ";
    for (int i = 0; i < n2; i++) {
        int val;
        cin >> val;
        if (s1.count(val)) {
            intersection.insert(val);
        }
    }
    
    cout << "Intersection: ";
    for (int x : intersection) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}