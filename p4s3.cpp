#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    double salary;

    
    Employee(int i, double s) {
        id = i;
        salary = s;
    }

    void display() {
        cout << "ID: " << id << ", Salary: " << salary << "\n";
    }
};

int main() {
    
    Employee e1(101, 35000.50);
    Employee e2(102, 42000.00);

    cout << "Employee 1: "; e1.display();
    cout << "Employee 2: "; e2.display();

    return 0;
}