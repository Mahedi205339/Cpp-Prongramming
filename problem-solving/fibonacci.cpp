#include <iostream>
#include <conio.h>
using namespace std;

int fibonacci(int n);
int main()
{
    int n;
    cout << "Enter the n of fibonacci num :";
    cin >> n;
    cout << fibonacci(n);
    getch();
}
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int Num1 = fibonacci(n - 1);
    int Num2 = fibonacci(n - 2);
    int num = Num1 + Num2;
    cout << num << "\t";
    return num;
}