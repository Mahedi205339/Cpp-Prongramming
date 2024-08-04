/*

 Problem :
       one chocolate = 1 taka ;
       three chocolate packet = 1 chocolate ;

       then how many chocolate would buy by 15 taka ?
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input amount :";
    cin >> n;
    int wrap = n;

    int totalChocolate = n;
    int wrappers = totalChocolate;

    while (wrappers >= 3)
    {
        int freeChocolates = wrappers / 3;
        totalChocolate += freeChocolates;
        wrappers = freeChocolates + (wrappers % 3);
    }

    cout << "Total chocolates you can get :" << totalChocolate << endl;

    return 0;
}