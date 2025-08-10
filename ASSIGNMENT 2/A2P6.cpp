#include<iostream>
using namespace std;

class employee{
private:
    int ID, overtime;
    float bonus;
public:
    void getdata(){
        cout << "Enter employee id: ";
        cin >> ID;
        cout << "Enter Total bonus: ";
        cin >> bonus;
        cout << "Enter total overtime: ";
        cin >> overtime;
    }

    void display(){
        cout << "Employee ID: " << ID << endl;
        cout << "Total Bonus: " << bonus << endl;
        cout << "Total overtime: " << overtime << endl;
        cout << "-----------------------------" << endl;
    }    
};

int main(){
    employee e1, e2, e3, e4;
    e1.getdata();
    e2.getdata();
    e3.getdata();
    e4.getdata();
    cout << "---------Employee Reports--------" << endl;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}