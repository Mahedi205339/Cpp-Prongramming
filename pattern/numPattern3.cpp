/*
# making this:

       1
      1 2
     1 2 3
    1 2 3 4
   1 2 3 4 5
   Row -> 1 to n;
   Col ->" "  1 to n-Row , num -> 1 to row ;

 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}