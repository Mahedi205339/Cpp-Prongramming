#include <iostream>
using namespace std;

int linerSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Input Key value :" << endl;

    cin >> key;

    int res = linerSearch(arr, n, key);
    cout << res << endl;

    if (res == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Match Found with" << " " << arr[res] << endl;
    }

    return 0;
}