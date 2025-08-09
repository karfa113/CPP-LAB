#include<iostream>
using namespace std;

class farenheit{
private:
    float c, f;
public:
    void input(){
        cout << "Enter temperature in farenheit: ";
        cin >> f;
    }
    
    float convert(){
        c = ((f - 32) / 9) * 5;
        return c;
    }
};

class celsius{
private:
    float c, f;
public:
    void input(){
        cout << "Enter temperature in celsius: ";
        cin >> c;
    }
    
    float convert(){
        f = ((9 * c) / 5) + 32;
        return f;
    }
};

int main(){
    char choice;
    cout << "Enter c for celsius and f for farenheit: ";
    cin >> choice;

    switch(choice){
        case 'C':
            celsius c;
            c.input();
            cout << "Temperature in farenheit: " << c.convert() << endl;
            break;
        case 'c':
            celsius c1;
            c1.input();
            cout << "Temperature in farenheit: " << c1.convert() << endl;
            break;
        case 'F':
            farenheit f;
            f.input();
            cout << "Temperature in celsius: " << f.convert() << endl;
            break;
        case 'f':
            farenheit f1;
            f1.input();
            cout << "Temperature in celsius: " << f1.convert() << endl;
            break;
        default:
            cout << "Invalid choice !";
            break;
    }

    return 0;
}