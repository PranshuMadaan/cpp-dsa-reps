#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a,b,c;
    cout << "Enter the coefficients a, b and c: ";
    cin >> a >> b >> c;


    double discriminant = b*b - 4*a*c;
    (discriminant >= 0) ? cout << "Roots are real and different.\n Finding roots...\n"
    : cout << "Roots are complex and different.\n Roots cannot be found in this program.\n";


    if (discriminant >= 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else {
        cout << "No real roots exist.\n";
    }
    return 0;
}
