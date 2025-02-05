#include <iostream>
using namespace std;
int main()
{
    int array[100], search, i, n;
    cout << "Enter number of elements in array :" << endl;
    cin >> n;

    cout << "Enter " << n << " integers " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter a number to search " << endl;
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            cout << search << " is present at location " << i + 1 << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << search << " isn't present in the array!" << endl;
    }
}