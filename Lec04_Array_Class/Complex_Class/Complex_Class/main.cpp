#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void print() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1.add(c2);
    Complex c4 = c1.subtract(c2);

    cout << "c1 = ";
    c1.print();

    cout << "c2 = ";
    c2.print();

    cout << "c1 + c2 = ";
    c3.print();

    cout << "c1 - c2 = ";
    c4.print();

    return 0;
}