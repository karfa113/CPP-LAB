#include<iostream>
using namespace std;
#define PI 3.14

class circle{
private:
    float r;
public:
    void input(){
        cout << "Enter radius of the circle: ";
        cin >> r;
    }

    void area(){
        cout << "Area of the circle: " << PI * r * r << endl;
    }

    void peri(){
        cout << "Perimeter of the circle: " << PI * 2 * r << endl;
    }
};

int main(){
    circle c1;
    c1.input();
    c1.area();
    c1.peri();
    return 0;
}