/*
A school wants to calculate the average grade of 5 students in a
class. Write a program that asks the user to input the grades of 5
students in a class, and then calculate the average grade.
 */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << " Enter the number of subjects :";
    cin >> n;
    int arr[n];

    cout << "Input the marks :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Total marks :" << sum << endl;
    float average = sum / n;
    cout << "Average marks :" << average << endl;

    getch();
}