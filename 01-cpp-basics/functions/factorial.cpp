#include <iostream>
using namespace std;

long long int factorial(long long int n) {
    if (n<0) {
        cout << "Error: Factorial is not defined for negative numbers!" << endl;
        return -1; // Return -1 or handle the error as needed
    } else if (n==0 || n==1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    long long int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 20) {
        cout << "Number too large!" << endl;
    } else {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }
    return 0;
}