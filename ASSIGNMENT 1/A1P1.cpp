#include<iostream>
using namespace std;

void swap(int &x, int &y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int main(void){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Before swapping: X = " << num1 << " Y = " << num2 << endl;
    swap(num1, num2);
    cout << "After swapping: X = " << num1 << " Y = " << num2;
    return 0;
}