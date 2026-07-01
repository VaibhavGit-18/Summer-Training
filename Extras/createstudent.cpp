#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

int main() {
    Student s;
    s.setName("Alice");
    cout << "Student Name: " << s.getName() << endl;
    return 0;
}