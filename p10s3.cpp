 #include <iostream>
using namespace std;

class Report {
public:
    char name[20];
    int rollNo;
    int marks[5];

    void input() {
        cout << "Enter name (one word): ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        for(int i=0; i<5; i++) {
            cout << "Enter marks of subject " << (i+1) << ": ";
            cin >> marks[i];
        }
    }

    void display() {
        int total = 0;
        for(int i=0; i<5; i++) {
            total += marks[i];
        }
        float percentage = total / 5.0;

        char grade;
        if(percentage >= 80) grade = 'A';
        else if(percentage >= 60) grade = 'B';
        else if(percentage >= 40) grade = 'C';
        else grade = 'F';

        cout << "\n Report Card\n";
        cout << "Name : " << name << "\n";
        cout << "Roll : " << rollNo << "\n";
        cout << "Total Marks : " << total << "\n";
        cout << "Percentage  : " << percentage << "\n";
        cout << "Grade       : " << grade << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Report r[10];   

    for(int i=0; i<n; i++) {
        cout << "\nEnter details for student " << (i+1) << ":\n";
        r[i].input();
    }

    cout << "\nAll Reports:\n";
    for(int i=0; i<n; i++) {
        r[i].display();
    }

    return 0;
}