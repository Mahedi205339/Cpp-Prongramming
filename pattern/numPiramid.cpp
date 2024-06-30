#include <iostream>
using namespace std;

int main()
{
    int n;
    int count;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " \t";
            count++;
        }
        cout << endl;
    }

    
}