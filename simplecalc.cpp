#include <iostream>
using namespace std;

class Calculator {
public:
    void performoperation() {
        double num1, num2, result;
        char operation;

        cout << "Simple Calculator" << endl;
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter the second number: ";
        cin >> num2;

        if (operation == '+') {
            result = num1 + num2;
            cout << "Result: " << result << endl;
        } 
        else if (operation == '-') {
            result = num1 - num2;
            cout << "Result: " << result << endl;
        } 
        else if (operation == '*') {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        } 
        else if (operation == '/') {
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } 
        else {
            cout << "Invalid operator!" << endl;
        }
    }
};

int main() {
    Calculator calc;
    calc.performoperation();
    return 0;
}