#include <iostream>
#include <cmath>
using namespace std;

class Circle {
public:
    double radius;

    Circle() {
        radius = 1.0;
    }

    r
    Circle(double r) {
        radius = r;
    }

    double area() {
        const double PI = 3.1415;
        return PI * radius * radius;
    }

    void display() {
        cout << "Radius: " << radius << " Area: " << area() << "\n";
    }
};

int main() {
    Circle c1;           
    Circle c2(2.5);     

    cout << "Circle 1 (default): ";
    c1.display();
    cout << "Circle 2 (given radius 2.5): ";
    c2.display();

    return 0;
}