 #include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex(int r = 0, int i = 0) {
        real = r; imag = i;
    }
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex a(3, 4), b(5, 6), result;
    result = add(a, b);
    cout << "Sum = " << result.real << " + " << result.imag << "i" << endl;
    return 0;
}