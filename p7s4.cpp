 #include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes;
    Time(int h, int m) {
        hours = h; minutes = m;
    }

    void addTime(Time &t) {  // passed by reference
        hours += t.hours;
        minutes += t.minutes;
        if (minutes >= 60) {
            hours++;
            minutes -= 60;
        }
    }

    void display() {
        cout << "Time: " << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1(2, 45), t2(1, 30);
    t1.addTime(t2);
    t1.display();
    return 0;
}