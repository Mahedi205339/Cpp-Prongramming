/*
# making this:

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

logic: here when we add the column number and row number and found even num there we found 1;
for example (1+1) = 2;--> 1;
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }
}
