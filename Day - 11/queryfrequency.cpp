#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter total elements: ";
    cin >> n;
    
    map<int, int> freq;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }
    
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int query;
        cout << "Query " << i + 1 << ": ";
        cin >> query;
        cout << query << " appears " << freq[query] << " times\n";
    }
    
    return 0;
}