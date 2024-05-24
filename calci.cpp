#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Welcome to Simple Calculator!" << endl;

    while (true) {
        // Input two numbers from user
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "Select operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Result: " << num1+num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1-num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1*num2 << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Cannot divide by zero!" << endl;
                } else {
                    cout << "Result: " << num1/num2 << endl;
                }
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }

    return 0;
}