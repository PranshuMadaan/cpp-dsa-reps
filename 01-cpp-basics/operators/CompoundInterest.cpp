#include <iostream>
using namespace std;


int main() {
    int t;
    float p, r, amount, ci;
    cout << "Enter Time (Years): ";
    cin >> t;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate: ";
    cin >> r;
    amount = p;
    for (int i = 0; i < t; i++) {
        amount = amount * (1 + r / 100);
    }
    ci = amount - p;
    cout << "Compound Interest: " << ci << endl;
    cout << "So, total amount is " << amount << endl;
    return 0;
}
