
#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    Complex() : real(0), imag(0) {
        
    } 

    Complex(double r, double i) : real(r), imag(i) {

    } 

    
    Complex add(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex a(2.5, 3.0);
    Complex b(1.5, 4.5);

    cout << "First complex  : "; 
    a.display();
    cout << "Second complex : ";
     b.display();

    Complex sum = a.add(b); 
    cout << "Sum : "; 
    sum.display();

    return 0;
}