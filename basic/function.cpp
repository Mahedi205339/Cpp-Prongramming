#include <iostream>
#include <conio.h>
using namespace std;

int add(int num1, int num2)
{
    int res = num1 + num2;
    return res;
}

int main()
{
    int num1, num2;
    cout << "Enter first num : ";
    cin >> num1;
    cout << "Enter second num : ";
    cin >> num2;

   cout << "result is " << add(num1,num2) << endl;


    getch();
}