 // Q7_Car.cpp
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    
    Car(string b, double p) : brand(b), price(p) {}

    Car(const Car &other) {
        brand = other.brand;
        price = other.price;
        cout << "Copy constructor called\n";
    }

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << "\n";
    }
};

int main() {
    Car car1("Honda", 15000.0);
    cout << "Original car:\n";
    car1.display();

    
    Car car2 = car1;
    cout << "Copied car:\n";
    car2.display();

    car2.price = 14000.0;
    cout << "After modifying copy's price:\n";
    cout << "Original price: "; car1.display();
    cout << "Copy price    : "; car2.display();

    return 0;
}