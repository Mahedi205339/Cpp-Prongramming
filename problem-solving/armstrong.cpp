/*
 Armstrong Num: The number which digit's cubic addition equal to the main num;
 example -> 153
    1^3 + 5^3 + 3^3 = 153
 */
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int originalNum = n ;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }

    if( originalNum == sum){
        cout<<"This is an Armstrong number";
    }else{
         cout<<"This is not an Armstrong number";
    }
}