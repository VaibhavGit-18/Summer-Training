#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, k_steps;
    cout << "Total elements: ";
    cin >> size;
    
    vector<int> original;
    vector<int> rotated;
    
    cout << "Provide numbers: ";
    for (int a = 0; a < size; a++) {
        int item;
        cin >> item;
        original.push_back(item);
    }
    
    cout << "Rotate by how many steps? ";
    cin >> k_steps;
    k_steps = k_steps % size;
    
    for (int b = size - k_steps; b < size; b++) {
        rotated.push_back(original[b]);
    }
    for (int c = 0; c < size - k_steps; c++) {
        rotated.push_back(original[c]);
    }
    
    cout << "Result after rotation: ";
    for (int d = 0; d < rotated.size(); d++) {
        cout << rotated[d] << " ";
    }
    cout << endl;
    
    return 0;
}