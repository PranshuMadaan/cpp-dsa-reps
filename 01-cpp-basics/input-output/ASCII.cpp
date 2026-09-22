#include <iostream>
using namespace std;


int main()
{
    char ch;
    int n;


    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value = " << int(ch) << endl;


    cout << "Enter an ASCII value: ";
    cin >> n;
    cout << "Character = " << char(n) << endl;


    return 0;
}
