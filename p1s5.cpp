 #include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks[5];
    int total;

public:
    void input() {
        cout << "Enter Roll No: ";
    
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name); 
        
         total = 0;

        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            
            total += marks[i]; 
        }
    }

    void display() {
        cout << "Roll No: " << rollNo 
         cout  << " Name: " << name 
          cout   << " Total: " << total << endl;
    }

    int getTotal() const {
        return total;
    }
};

int main() {
    int n;
    
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];


    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\n Student Totals \n";
    
    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        
        if (students[i].getTotal() > students[maxIndex].getTotal()) {
            maxIndex = i;
        }
    }

    cout << "\n Student with Highest Total \n";
    students[maxIndex].display();

    
    delete[] students; 
    
    return 0;
}