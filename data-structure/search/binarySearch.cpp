#include <iostream>
using namespace std;

int main()
{
    int array[100], search, i, n, first, middle, last;

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter " << n << " integers in sorted order: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter a number to search: ";
    cin >> search;

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        middle = (first + last) / 2; // Corrected middle calculation

        if (array[middle] == search)
        {
            cout << search << " found at location " << middle + 1 << endl;
            return 0;
        }
        else if (array[middle] < search)
        {
            first = middle + 1; // Search in right half
        }
        else
        {
            last = middle - 1; // Search in left half
        }
    }

    cout << search << " is not in the array." << endl;
    return 0;
}
