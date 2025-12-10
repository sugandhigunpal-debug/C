 #include <iostream>
using namespace std;

class Complex {
public:
    float r, i;

    void input() {
        cout << "Enter Real: ";
        cin >> r;
        cout << "Enter Imaginary: ";
        cin >> i;
    }

    Complex operator+(Complex &c) {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }

    Complex operator-(Complex &c) {
        Complex temp;
        temp.r = r - c.r;
        temp.i = i - c.i;
        return temp;
    }

    Complex operator*(Complex &c) {
        Complex temp;
        temp.r = r * c.r - i * c.i;
        temp.i = r * c.i + i * c.r;
        return temp;
    }

    void display() const {
        cout << r << " + " << i << "i" << endl;
    }
};

int main() {
    Complex a, b;

    cout << "Enter Complex Number 1:\n";
    a.input();

    cout << "Enter Complex Number 2:\n";
    b.input();

    Complex sum = a + b;
    Complex diff = a - b;
    Complex mul = a * b;

    cout << "\nSum = ";
    sum.display();

    cout << "Difference = ";
    diff.display();

    cout << "Product = ";
    mul.display();

    return 0;
}
