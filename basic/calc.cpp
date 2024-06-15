#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int num1, num2;

    // num1 = 25;
    // num2 = 10;
    cout<< "Enter first number : ";
    cin>> num1;
    cout<< "Enter second number : ";
    cin>> num2;

    int sum = num1 + num2;
    cout << "Sum is : " << sum;
    cout << endl;

    int sub = num1 - num2;
    cout << "Sub is : " << sub;
    cout << endl;

    int mul = num1 * num2;
    cout << "Mul is : " << mul;
    cout << endl;

    double div = float(num1) / num2; //type casting
    cout << "Div is : " << div;
    cout << endl;
    int rem = num1 % num2;
    cout << "Rem is : " << rem;
    cout << endl;

    getch();
}