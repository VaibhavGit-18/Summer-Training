#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    map<int, int> m;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    
    int max_count = 0;
    int ans = -1;
    
    for (auto it : m) {
        if (it.second > max_count) {
            max_count = it.second;
            ans = it.first;
        }
    }
    
    cout << "Most frequent element is: " << ans << endl;
    return 0;
}