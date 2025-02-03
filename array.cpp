// by using array search even odd number
#include <iostream>
using namespace std;

class ArrayOperations {
    int arr[100], size;

public:
    void getInput() {
        cout << "Enter the size of the array: ";
        cin >> size;

        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void displayArray() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void calculateSum() {
        int totalSum = 0;
        for (int i = 0; i < size; i++) {
            totalSum += arr[i];
        }
        cout << "Sum of all elements: " << totalSum << endl;
    }

    void checkEvenOdd() {
        int evenSum = 0, oddSum = 0;

        cout << "Even numbers: ";
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                cout << arr[i] << " ";
                evenSum += arr[i];
            }
        }
        cout << "\nSum of even numbers: " << evenSum << endl;

        cout << "Odd numbers: ";
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 != 0) {
                cout << arr[i] << " ";
                oddSum += arr[i];
            }
        }
        cout << "\nSum of odd numbers: " << oddSum << endl;
    }
};

int main() {
    ArrayOperations obj;
    obj.getInput();
    obj.displayArray();
    obj.calculateSum();
    obj.checkEvenOdd();

    return 0;
}
