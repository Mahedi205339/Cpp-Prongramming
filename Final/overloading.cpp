#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "The sum of 3 and 6 is :" << add(3, 6)<<endl;
    cout << "The sum of 3 , 4 ,and 6 is :" << add(3, 4, 6);

    return 0;
}