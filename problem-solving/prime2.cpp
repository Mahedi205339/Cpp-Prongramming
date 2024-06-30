#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<" Enter a num :";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << " Non prime number ";
            break;
        }
    }
    if (i == n)
    {
        cout << " Prime Number" << endl;
    }
}