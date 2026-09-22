#include <iostream>
using namespace std;
#include <math.h>
int main() {
    double number, sin_value, cos_value, log_value, pow_value, sqrt_value;
    cout << "Enter a number: ";
    cin >> number;
    sin_value = sin(number);
    cos_value = cos(number);
    log_value = log(number);
    pow_value = pow(number, 2);
    sqrt_value = sqrt(number);
    cout << "Sin: " << sin_value << endl;
    cout << "Cos: " << cos_value << endl;
    cout << "Log: " << log_value << endl;
    cout << "Square: " << pow_value << endl;
    cout << "Square Root: " << sqrt_value << endl;
    return 0;
}
