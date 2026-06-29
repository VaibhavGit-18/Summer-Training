#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    pair<int, string> student;
    
    cout << "Enter Roll Number: ";
    cin >> student.first;
    cout << "Enter Name: ";
    cin >> student.second;
    
    cout << "Record -> Roll: " << student.first << ", Name: " << student.second << endl;
    return 0;
}