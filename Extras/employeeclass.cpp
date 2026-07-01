#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Employee ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    string empName;
    int empId;

    cout << "Enter Employee Name: ";
    cin >> empName;
    cout << "Enter Employee ID: ";
    cin >> empId;

    Employee e1(empName, empId);
    e1.display();

    return 0;
}