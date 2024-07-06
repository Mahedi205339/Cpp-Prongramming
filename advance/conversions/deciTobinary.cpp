// Decimal to Binary
#include <bits/stdc++.h>
using namespace std;

int deciToBinary(int n)
{
    int ans = 0;
    int x = 1;
    
    // Finding the largest power of 2 less than or equal n
    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << deciToBinary(n) << endl;
}

/*

Let's convert
𝑛 = 13

n=13 to binary using this code.

1. Initialization:

ans = 0
x = 1

2. Finding the largest power of 2 less than or equal to 13:

 x = 1, x = 2, x = 4, x = 8, x = 16 (loop stops here)
 x = 16 / 2 = 8 (largest power of 2 less than or equal to 13)


3. Converting to binary:

x = 8
lastDigit = 13 / 8 = 1
n = 13 - 1 * 8 = 5
ans = 0 * 10 + 1 = 1
x = 4


lastDigit = 5 / 4 = 1
n = 5 - 1 * 4 = 1
ans = 1 * 10 + 1 = 11
x = 2


lastDigit = 1 / 2 = 0
n = 1 - 0 * 2 = 1
ans = 11 * 10 + 0 = 110
x = 1

lastDigit = 1 / 1 = 1
n = 1 - 1 * 1 = 0

ans = 110 * 10 + 1 = 1101

So, the binary representation of 13 is 1101.
 */