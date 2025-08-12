#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void input() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    Complex add(Complex t) {
        return Complex(real + t.real, imag + t.imag);
    }

    Complex subtract(Complex t) {
        return Complex(real - t.real, imag - t.imag);
    }

    Complex multiply(Complex t) {
        double r = (real * t.real) - (imag * t.imag);
        double i = (real * t.imag) + (imag * t.real);
        return Complex(r, i);
    }

    Complex divide(Complex t) {
        double denominator = (t.real * t.real) + (t.imag * t.imag);
        if (denominator == 0) {
            cout << "Error: Division by zero!" << endl;
            return Complex();
        }
        double r = ((real * t.real) + (imag * t.imag)) / denominator;
        double i = ((imag * t.real) - (real * t.imag)) / denominator;
        return Complex(r, i);
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);
    Complex prod = c1.multiply(c2);
    Complex quot = c1.divide(c2);

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    cout << "Multiplication: ";
    prod.display();

    cout << "Division: ";
    quot.display();

    return 0;
}