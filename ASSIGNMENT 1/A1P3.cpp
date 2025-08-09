#include<iostream>
#include<cmath>
using namespace std;

int pronic(int n){
    int limit = sqrt(n) + 1;
    for(int i=0; i<=limit; i++){
        if(n == i*(i+1)) return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(pronic(num)){
        cout << "Pronic Number";
    }else{
        cout << "Not a Pronic Number";
    }

    return 0;
}