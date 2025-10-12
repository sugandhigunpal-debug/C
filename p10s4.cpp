 #include <iostream>
using namespace std;

class Employee {
public:
    int id, salary;
    Employee(int i, int s) {
        id = i; salary = s;
    }

    void updateSalary(Employee &e) {   
        salary = e.salary;
    }

    void show() {
        cout << "ID: " << id << " | Salary: " << salary << endl;
    }
};


void swap(Employee *e1, Employee *e2) {
    int temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}

int main() {
    Employee e1(101, 5000), e2(102, 7000);

    cout << "Before swap:\n";
    e1.show();
    e2.show();

    swap(&e1, &e2);

    cout << "\nAfter swap:\n";
    e1.show();
    e2.show();

    e1.updateSalary(e2);
    cout << "\nAfter updating e1’s salary from e2:\n";
    e1.show();

    return 0;
}