#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
    float num1, num2;

    // num1 = 25;
    // num2 = 10;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    float sum = num1 + num2;
    cout << setw(25) << "Sum is : " << sum;
    cout << endl;
    // cout << noshowpoint;
    float sub = num1 - num2;
    cout << setw(25) << "Sub is : " << sub;
    cout << endl;

    float mul = num1 * num2;
    cout  << setw(25)<< "Mul is : " << mul;
    cout << endl;

    double div = float(num1) / num2; // type casting
    cout<< setw(25) << "Div is : " << div;
    cout << endl;

    // float data type does not allow to take reminder.only integer allows

    // float rem = num1 % num2;
    // cout << "Rem is : " << rem;
    // cout << endl;

    getch();
}