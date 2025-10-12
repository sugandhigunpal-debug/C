 #include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;
    Student(string n, int m) {
        name = n; marks = m;
    }
};

Student compare(const Student &s1, const Student &s2) {
    if (s1.marks > s2.marks) return s1;
    else return s2;
}

int main() {
    Student s1("Amit", 80), s2("Rahul", 90);
    Student topper = compare(s1, s2);
    cout << "Topper: " << topper.name << " with " << topper.marks << " marks." << endl;
    return 0;
}