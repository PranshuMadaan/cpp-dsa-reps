#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a / b;
}
int mod(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle the error as needed
    }
    return a % b;
}

int main(){
    long long int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum: " << sum(a, b) << endl;
    cout << "Subtract: " << subtract(a, b) << endl;
    cout << "Multiply: " << multiply(a, b) << endl;
    cout << "Divide: " << divide(a, b) << endl;
    cout << "Modulus: " << mod(a, b) << endl;
    return 0;
}