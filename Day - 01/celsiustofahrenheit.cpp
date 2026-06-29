#include <iostream>
using namespace std;

int main() {
    float tempCelsius, tempFahrenheit;
    cout << "Enter the temperature in Celsius: ";
    cin >> tempCelsius;
    
    tempFahrenheit = (tempCelsius * 1.8) + 32; 
    
    cout << "Temperature in Fahrenheit is: " << tempFahrenheit << endl;
    return 0;
}