#include <iostream>
#include <conio.h>
using namespace std;

int fact(int num);

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;
    cout << "factorial of  " << num<<" " << "is"<< " " << fact(num) << endl;
}
int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 1;
    }
   int numNm1 = fact(num - 1);
    int num2 = numNm1 * num;
    return num2;
} 