#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    
    cout << "Sum using pointers: " << sum << endl;
    return 0;
}