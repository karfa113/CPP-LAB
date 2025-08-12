#include<iostream>
#include <iomanip>
using namespace std;

class Time { 
    int hours, minutes, seconds;
public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void initFixed() {
        hours = 2;
        minutes = 30;
        seconds = 45;
    }

    void getdata() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        // Input validation
        if (hours < 0) hours = 0;
        if (minutes < 0) minutes = 0;
        if (seconds < 0) seconds = 0;
        if (minutes > 59) minutes = 59;
        if (seconds > 59) seconds = 59;
    }

    void display() const {
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << endl;
    }

    Time add(const Time &t) const {
        int hr = hours + t.hours;
        int min = minutes + t.minutes;
        int sec = seconds + t.seconds;

        if (sec >= 60) {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min >= 60) {
            hr += min / 60;
            min = min % 60;
        }

        return Time(hr, min, sec);
    }

    Time subtract(const Time &t) const {
        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diff = total1 - total2;
        if (diff < 0) diff = 0; 

        int hr = diff / 3600;
        int min = (diff % 3600) / 60;
        int sec = diff % 60;

        return Time(hr, min, sec);
    }
};

int main() {
    Time t1;
    Time t2;
    Time t3;

    cout << "Enter values for time 1" << endl;
    t1.getdata();

    cout << "Enter values for time 2" << endl;
    t2.getdata();

    cout << "Addition result: " << endl;
    t3 = t1.add(t2);
    t3.display();

    cout << "Subtraction result: " << endl;
    t3 = t1.subtract(t2);
    t3.display();

    return 0;
}