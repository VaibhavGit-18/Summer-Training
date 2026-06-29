#include <iostream>
using namespace std;

int main() {
    float principalAmount, interestRate, timePeriod, simpleInterest;
    cout << "Enter Principal: ";
    cin >> principalAmount;
    cout << "Enter Rate: ";
    cin >> interestRate;
    cout << "Enter Time (Years): ";
    cin >> timePeriod;
    simpleInterest = (principalAmount * interestRate * timePeriod) / 100;
    cout << "Calculated Simple Interest: " << simpleInterest << endl;
    return 0;
}