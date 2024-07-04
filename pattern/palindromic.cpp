/*
 Making this :
          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
  5 4 3 2 1 2 3 4 5

 It's a Palindromic Patter
 Row -> 1 to n ;
 Col -> " " 1 to n ;
     ->k = row no; k--,(decreasing)n -row no to n;(increasing) k = 2, k++ , n to n+ row - 1;
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }
         cout << endl;
    }
}