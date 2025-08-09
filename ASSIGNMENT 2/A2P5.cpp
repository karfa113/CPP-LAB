#include<iostream>
using namespace std;

class date{
private:
    int day, month, year;
public:
    void input(){
        cout << "Enter date (DD MM YYYY): ";
        cin >> day >> month >> year;
    }

    bool isLeapYear() {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    bool isvalid(){
        if(year < 1) return false;
        if(month > 12 || month < 1) return false;

        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (isLeapYear())
            daysInMonth[2] = 29;

        if (day < 1 || day > daysInMonth[month])
            return false;
        return true;
    }
};

int main(){
    date d;
    d.input();
    if(d.isvalid()){
        cout << "Valid date";
    }else{
        cout << "Invalid date";
    }

    return 0;
}