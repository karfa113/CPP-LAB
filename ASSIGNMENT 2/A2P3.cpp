#include<iostream>
using namespace std;

class temp{
private:
    float c, f;
public:
    void input(){
        cout << "Enter temperature in farenheit: ";
        cin >> f;
    }
    
    void convert(){
        c = ((f - 32) / 9) * 5;
    }

    void display(){
        cout << "Temperature in Celsius: " << c;
    }
};

int main(){
    temp t;
    t.input();
    t.convert();
    t.display();
    return 0;
}