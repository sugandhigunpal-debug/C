#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    char name[20];   1

    void display() {
        cout << "Roll No: " << rollNo << "\n";
        cout << "Name   : " << name << "\n";
    }
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter name (one word): ";
    cin >> s.name;   

    cout << "\nYou entered:\n";
    s.display();

    return 0;
}