// Write a C++ program that takes a number as input and prints its multiplication table up to 10.

#include <iostream>
using namespace std;

int main()
{

    cout << "Input a num :";
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        int ans;
        ans = n * i;
        cout << n << " * " << i << " =" << ans << endl;
    }
    return 0;
}