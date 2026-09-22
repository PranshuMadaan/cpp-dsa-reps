#include <iostream>
using namespace std;


int main() {
    int num, flipped_num = 0;


    cout << "Enter an integer: ";
    cin >> num;


    while (num != 0) {
        flipped_num = flipped_num * 10 + (num % 10);
        num /= 10;
    }


    cout << "Flipped number: " << flipped_num << endl;
    return 0;
}
