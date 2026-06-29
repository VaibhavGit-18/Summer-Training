#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }
    
    cout << "Traversing using pointers: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
    return 0;
}