#include <bits/stdc++.h>
using namespace std;

class rectangle
{

public:
    void area(int a, int b)
    {
        cout << a * b << endl;
    }
    void perimeter(int a, int b)
    {
        cout << 2 * (a + b) << endl;
    }
    void diagonal(int a, int b)
    {
        cout << sqrt(a * a + b * b) << endl;
    }
};

int main()
{
    int a = 10;
    int b = 20;

    rectangle measurement;

    measurement.area(a, b);
    measurement.perimeter(a, b);
    measurement.diagonal(a, b);
}
