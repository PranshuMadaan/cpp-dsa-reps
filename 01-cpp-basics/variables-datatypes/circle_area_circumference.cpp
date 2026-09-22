#include <iostream>
using namespace std;

int main() {
    float r;
    cout << "Enter the radius = ";
    cin >> r;
    const double pi = 3.1415926;
    double area = pi * r * r;
    double cir = 2 * pi * r;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << cir << endl;
    return 0;
}