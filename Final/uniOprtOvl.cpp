#include <iostream>
using namespace std;

class Increment
{
private:
    int value;

public:
    Increment()
    {
        value = 10;
    }

    void operator++()
    {
        value = value + 5;
    }

    void display()
    {
        cout << "Value is : " << value << endl;
    }
};

int main()
{
    Increment Inc;
    ++Inc;
    Inc.display();

    return 0;
}