//WAP to calculate the gross salary of a person, where gross_salary = basic + da + ta, and da is 10% of basic and ta is 12% of basic.

#include <iostream>
using namespace std;

int main() {
    float gross_salary, basic, ta, da;
    cout << "Enter basic salary: ";
    cin >> basic;
    da = 0.1 * basic;
    ta = 0.12 * basic;
    gross_salary = basic + da + ta;
    cout << "Gross Salary: " << gross_salary << endl;
    return 0;
}
