 #include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basic, hra, da, netSalary;

public:
    Employee() {
        id = 0;
        name = "NA";
        basic = hra = da = netSalary = 0;
    }

    Employee(int i, string n, float b, float h, float d) {
        id = i; name = n; basic = b; hra = h; da = d;
        netSalary = basic + hra + da;
    }

    void input() {
        cout << "Enter ID, Name, Basic, HRA, DA: ";
        cin >> id >> name >> basic >> hra >> da;
        netSalary = basic + hra + da;
    }

    void display() const {
        cout << id << " " << name << " Net Salary: " << netSalary << endl;
    }

    float getNet() const { return netSalary; }
};

int main() {
    int n;
    cout << "Enter employee count: ";
    cin >> n;

    Employee e[n];
    for (int i = 0; i < n; i++)
        e[i].input();

    cout << "\nEmployees earning above 50000:\n";
    for (int i = 0; i < n; i++)
        if (e[i].getNet() > 50000)
            e[i].display();
}
