#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Constructor to initialize a and b
    Complex()
    {
        a = 30;
        b = 40;
    }

    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);
    
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Defining the friend function outside the class
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.printNumber();  // Using the default values set by the constructor
    c2.setNumber(3, 6);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
