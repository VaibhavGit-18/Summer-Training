#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Int addition: " << calc.add(5, 10) << endl;
    cout << "Float addition: " << calc.add(5.5f, 2.2f) << endl;
    return 0;
}