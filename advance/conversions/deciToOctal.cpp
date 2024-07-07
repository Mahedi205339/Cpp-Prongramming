// Decimal to Octal
#include <bits/stdc++.h>
using namespace std;

int deciToOctal(int n)
{
    int ans = 0;
    int x = 1;
    
    // Finding the largest power of 2 less than or equal n
    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << deciToOctal(n) << endl;
}