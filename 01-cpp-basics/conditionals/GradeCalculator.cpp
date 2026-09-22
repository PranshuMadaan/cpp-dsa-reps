#include <iostream>
using namespace std;

int main() {
    cout << "Enter the marks obtained in 5 subjects: ";
    float marks[5];
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    float percentage = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    cout << "Percentage: " << percentage << "%" << endl;
    if(percentage >= 90)
        cout << "Grade: A" << endl;
    else if(percentage >= 80)
        cout << "Grade: B" << endl;
    else if(percentage >= 70)
        cout << "Grade: C" << endl;
    else if(percentage >= 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;
    return 0;
}