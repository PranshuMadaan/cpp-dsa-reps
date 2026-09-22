#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter the operation (+, -, *, /, %): ";
    char op;
    cin >> op;
    switch(op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if(b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case '%':
            if(b != 0)
                cout << "Result: " << a % b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }
    return 0;
}