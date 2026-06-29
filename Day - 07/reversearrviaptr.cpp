#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int* start = arr;
    int* end = arr + n - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
    return 0;
}