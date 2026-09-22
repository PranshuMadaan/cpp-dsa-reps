#include <iostream>
using namespace std;

int main() {
    int t;
    float p,r;
    cout << "Enter Time (Years):";
    cin >> t;
    cout << "Enter principal amount:";
    cin >> p;
    cout << "Enter rate:";
    cin >> r;
    float si = (p*r*t)/100;
    cout << "Simple Interest: " << si << endl;
    cout << "So, total amount is " << si + p << endl;
    return 0;
}
