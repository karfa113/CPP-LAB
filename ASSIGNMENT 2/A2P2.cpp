#include<iostream>
using namespace std;

class complex{
public:
    int real;
    int imag;

    void input(){
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    void display(){
        cout << "real: " << real << "\nImaginary: " << imag << endl;
    }
};

class ADD{
public:
    int f1(int a, int b){
        return a + b;
    }

    float f2(float a, float b, int c){
        return a + b + c;
    }

    complex f3(complex c1, complex c2){
        complex sum;
        sum.real = c1.real + c2.real;
        sum.imag = c1.imag + c2.imag;
        return sum;
    }
};

int main(){
    ADD obj;

    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    cout << "Sum of two integer numbers: " << obj.f1(n1, n2) << endl;

    float g1, g2;
    int n3;
    cout << "Enter two decimal and one integer numbers: ";
    cin >> g1 >> g2 >> n3;
    cout << "Sum of two flaot and one integer numbers: " << obj.f2(g1, g2, n3) << endl;

    complex c1, c2, c3;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "Enter second complex number:\n";
    c2.input();
    c3 = obj.f3(c1, c2);
    cout << "Sum of two complex numbers: \n";
    c3.display();
    cout << endl;
    
    return 0;
}