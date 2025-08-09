#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14

class square{
private:
    float a;
public:
    void input(){
        cout << "Enter side of the square: ";
        cin >> a;
    }

    void area(){
        cout << "Area of the square: " << a * a << endl;
    }
};

class rectangle{
private:
    float l;
    float b;
public:
    void input(){
        cout << "Enter length and bredth of the rectangle: ";
        cin >> l >> b;
    }

    void area(){
        cout << "Area of the rectangle: " << l*b << endl;
    }
};

class triangle{
private:
    float side1, side2, side3;
public:
    void input(){
        cout << "Enter 3 sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
    }

    void area(){
        float s = (side1 + side2  + side3) / 2;
        cout << "Area of the triangle: " << sqrt(s*(s-side1)*(s-side2)*(s-side3)) << endl;
    }
};

int main(){
    square s1;
    s1.input();
    s1.area();

    rectangle r1;
    r1.input();
    r1.area();

    triangle t1;
    t1.input();
    t1.area();

    return 0;
}