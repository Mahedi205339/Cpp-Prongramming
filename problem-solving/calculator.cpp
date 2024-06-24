/*
Write C++ programme to create simple calculator using switch statement
 */
#include <iostream>
using namespace std;

int main()
{
    char mathOperator;
    double firstNumber, secondNumber;

    // Reading math operator from user
    cout << "Enter an operator (+, -, *, /): ";
    cin >> mathOperator;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    switch (mathOperator)
    {
    case '+':
        cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber;
        break;
    case '-':
        cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber;
        break;
    case '*':
        cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber;
        break;
    case '/':
        if (secondNumber != 0)
            cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber;
        else
            cout << "Error! Division by zero.";
        break;
    default:
        cout << "Error! Please enter a correct operator.";
    }

    return 0;
}
