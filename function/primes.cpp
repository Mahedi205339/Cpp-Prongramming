#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    cout << "I put two numbers :";
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    getch();
}