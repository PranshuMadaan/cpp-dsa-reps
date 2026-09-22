#include <iostream>
using namespace std;

int main() {
    cout << "Enter temperature in Celsius: ";
    float celsius;
    cin >> celsius;
    float fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit." << endl;
    return 0;
}