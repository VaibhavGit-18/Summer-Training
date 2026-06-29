#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    
    cout << "Minimum element is: " << minElement << endl;
    return 0;
}