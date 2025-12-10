 #include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int m1, m2, m3;
    int total;

    void input() {
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
        total = m1 + m2 + m3;
    }

    void display() const {
        cout << roll << " " << name << " Total: " << total << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
        s[i].input();

    // Sort by total descending
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (s[j].total < s[j + 1].total)
                swap(s[j], s[j + 1]);

    cout << "\n--- RANK LIST ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Rank " << i + 1 << ": ";
        s[i].display();
    }

    return 0;
}
