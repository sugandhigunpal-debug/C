 #include <iostream>
using namespace std;

class Item {
public:
    int code;
    string name;
    int qty;

    void input() {
        cout << "Enter Code, Name, Quantity: ";
        cin >> code >> name >> qty;
    }

    // Add quantities of same code
    Item operator+(Item &b) {
        Item temp;
        if (code == b.code) {
            temp.code = code;
            temp.name = name;
            temp.qty = qty + b.qty;
        }
        return temp;
    }

    void display() {
        cout << code << " " << name << " " << qty << endl;
    }
};

int main() {
    int n1, n2;
    cout << "Enter count of inventory 1: ";
    cin >> n1;
    Item a[n1];

    cout << "Enter count of inventory 2: ";
    cin >> n2;
    Item b[n2];

    cout << "\nEntering Inventory 1:\n";
    for (int i = 0; i < n1; i++) a[i].input();

    cout << "\nEntering Inventory 2:\n";
    for (int i = 0; i < n2; i++) b[i].input();

    cout << "\nMerged Stock (same codes added):\n";
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            if (a[i].code == b[j].code)
                (a[i] + b[j]).display();
}
