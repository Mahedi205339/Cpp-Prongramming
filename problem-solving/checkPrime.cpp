#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    cout << "Input a number :";
    int n;
    cin >> n;
    bool flag = false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Non-Prime Number";
    }
    else
    {
        cout << "Prime Number";
    }

    getch();
}