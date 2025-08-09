#include<iostream>
using namespace std;

class complex{
private:
    int real;
    int imag;
public:
    void input(){
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    complex add(complex t){
        complex sum;
        sum.real = real + t.real;
        sum.imag = imag + t.imag;

        return sum;
    }

    void display(){
        cout << "real: " << real << "\nImaginary: " << imag << endl;
    }
};

int main(){
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1.add(c2);
    c3.display();
    return 0;
}