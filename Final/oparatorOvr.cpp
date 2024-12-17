#include <iostream>
using namespace std;

// Class for Complex Numbers
class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 5.6);
    Complex c2(1.2, 2.4);

    Complex c3 = c1 + c2; // Using overloaded + operator

    cout << "c1: ";
    c1.display();

    cout << "c2: ";
    c2.display();

    cout << "c1 + c2 = c3: ";
    c3.display();

    return 0;
}
