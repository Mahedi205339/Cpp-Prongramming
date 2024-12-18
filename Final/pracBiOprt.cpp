#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void input()
    {
        cout << "Enter real and imaginary parts respectively : " << endl;
        cin >> real;
        cin >> imag;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display()
    {
        cout << "Output is: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex com1, com2, res;
    cout << "Enter first complex num i.e" << endl;
    com1.input();
    cout << "Enter second complex num i.e" << endl;
    com2.input();

    res = com1 + com2;
    res.display();

    return 0;
}