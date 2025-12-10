  #include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Car {
private:
    string model;
    string company;
    float price;

public:
    void input() {
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() const {
        cout << "Model: " << model
             << ", Company: " << company
             << ", Price: " << price << endl;
    }

    string getCompany() const { return company; }
    float getPrice() const { return price; }
};

// lowercase function
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car c[n];
    for (int i = 0; i < n; i++) {
        cout << "\nCar " << i + 1 << ":\n";
        c[i].input();
    }

    string searchComp;
    cout << "\nEnter company to search: ";
    cin >> searchComp;

    string target = toLower(searchComp);
    bool found = false;

    cout << "\nCars by " << searchComp << ":\n";
    for (int i = 0; i < n; i++) {
        if (toLower(c[i].getCompany()) == target) {
            c[i].display();
            found = true;
        }
    }

    if (!found)
        cout << "No cars found for this company.\n";

    // Find most expensive
    Car maxCar = c[0];
    for (int i = 1; i < n; i++)
        if (c[i].getPrice() > maxCar.getPrice())
            maxCar = c[i];

    cout << "\nMost Expensive Car:\n";
    maxCar.display();

    return 0;
}
