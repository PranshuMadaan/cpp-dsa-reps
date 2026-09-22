#include <iostream>
using namespace std;

void arrCopy(int arr1[], int arr2[]) {
    for (int i = 0; i < 5; i++) {
        arr1[i] = arr2[i];
    }
}

int main() {
    int arr1[5];
    int arr2[5];

    cout << "Enter 5 integers for the first array:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 5 integers for the second array:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }

    cout << "Copying arrays...\n";

    arrCopy(arr1, arr2);

    cout << "Arrays copied successfully.\n";

    cout << "First array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }

    cout << "\nSecond array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}