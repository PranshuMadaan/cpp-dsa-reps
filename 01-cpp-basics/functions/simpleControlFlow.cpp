#include <iostream>
using namespace std;

bool accept() {
    int tries = 1;
    while (tries < 4) {
        cout << "Do you accept? (y/N): \n";
        char answer = 0;
        cin >> answer;

        switch (answer) {
            case 'y':
                return true;
            case 'N':
                return false;
            default:
                cout << "Sorry, I didn't understand that. \n";
                tries = tries + 1;
        }
    }
    cout <<"I'll take that for a no. \n";
    return false;
}

int main() {
    if (accept()) {
        cout << "You accepted. \n";
    } else {
        cout << "You did not accept. \n";
    }
}

/*
In this code, we define a function `accept()` that prompts the user for input and returns a boolean value based on their response. 
The `main()` function calls `accept()` and prints a message based on the returned value.
*/