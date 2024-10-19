#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /, ^ for power, s for sin, c for cos, t for tan, l for log): ";
    cin >> operation;

    if (operation == 's') {
        cout << "Result: " << sin(num1) << endl;
    } else if (operation == 'c') {
        cout << "Result: " << cos(num1) << endl;
    } else if (operation == 't') {
        cout << "Result: " << tan(num1) << endl;
    } else if (operation == 'l') {
        cout << "Result: " << log(num1) << endl;
    } else {
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+': cout << "Result: " << num1 + num2; break;
            case '-': cout << "Result: " << num1 - num2; break;
            case '*': cout << "Result: " << num1 * num2; break;
            case '/': cout << "Result: " << num1 / num2; break;
            case '^': cout << "Result: " << pow(num1, num2); break;
            default: cout << "Invalid operation"; break;
        }
    }

    return 0;
}
