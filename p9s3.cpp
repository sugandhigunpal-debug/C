 // Q9_Time.cpp
#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;

    Time() : hours(0), minutes(0) {

    }
    Time(int h, int m) : hours(h), minutes(m) {

    }

    
    Time addTime(Time t) {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        
        if (result.minutes >= 60) {
            result.hours += result.minutes / 60;
            result.minutes = result.minutes % 60;
        }
        return result;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes\n";
    }
};

int main() {
    Time t1(2, 40); 
    Time t2(1, 35);

    cout << "Time 1: "; 
    t1.display();
    cout << "Time 2: ";
     t2.display();

    Time t3 = t1.addTime(t2);
    cout << "Sum   : "; 
    t3.display(); 

    return 0;
}