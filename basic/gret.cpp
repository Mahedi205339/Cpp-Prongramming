#include <iostream>
#include <conio.h>
using namespace std;

float circle(double r)
{
    float area = 3.14159 * r * r;
    return area;
}

int main()
{
    float r;
    cout << "Enter the value of r : ";
    cin >> r;
    cout<< "the area of this circle : "<< circle(r)<<endl;
}