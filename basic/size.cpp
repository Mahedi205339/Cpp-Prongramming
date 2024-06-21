#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    // use of size off

    // int a;
    // float f;
    // double d;
    // char ch;
    // char name[20];
    // int c = sizeof(name);
    // cout << c;

    int x, y, sum;
    sum = (x = 20, y = 30, sum = x + y);
    cout << sum;

    getch();
}