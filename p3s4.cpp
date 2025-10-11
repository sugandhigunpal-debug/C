 #include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle(int r) {
        radius = r;
    }
};

void increaseRadius(Circle *c) {
    c->radius += 5;
}

int main() {
    Circle c1(10);
    increaseRadius(&c1);
    cout << "New Radius: " << c1.radius << endl;
    return 0;
}