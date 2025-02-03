#include <iostream>
using namespace std;

int square(int number) {
    return number * number;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The square of " << num << " is " << square(num) << endl;
    return 0;
}
