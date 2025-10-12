 #include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;
    Box(int l, int w, int h) {
        length = l; width = w; height = h;
    }

    void compare(Box b) {   // passed by value
        int v1 = length * width * height;
        int v2 = b.length * b.width * b.height;

        if (v1 > v2)
            cout << "Calling object has larger volume.\n";
        else
            cout << "Passed object has larger volume.\n";
    }
};

int main() {
    Box b1(2, 3, 4);
    Box b2(3, 4, 5);
    b1.compare(b2);
    return 0;
}