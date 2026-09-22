#include <iostream>
using namespace std;

int main() {
    char name,city;
    int age;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city: ";
    cin >> city;

    cout << "Hello, my name is" << name << ", I am " << age << " years old and I live in " << city << "." << endl;
}