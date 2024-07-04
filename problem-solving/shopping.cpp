/*
A store owner wants to calculate the total cost of the items in a
customer's shopping cart. Write a program that asks the user to input
the prices and quantities of different items in the cart, and then
calculate the total cost.
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of total products :";

    cin >> n;

    int arr[n];
    cout << "Enter the price of the products :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Total Price " << sum << endl;
    return 0;
}
