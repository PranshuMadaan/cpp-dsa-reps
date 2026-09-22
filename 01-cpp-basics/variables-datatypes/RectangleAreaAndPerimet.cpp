#include <iostream>
using namespace std;

int main() {
    float l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    float area = l * b;
    float perimeter = 2 * (l + b);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0;
}
