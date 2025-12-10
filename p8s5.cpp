 #include <iostream>
using namespace std;

class Item {
public:
    int id;
    string name;
    float price;
    int qty;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> qty;
    }

    float getTotal() const {
        return price * qty;
    }

    void display() const {
        cout << id << " " << name << " " << price 
             << " Qty: " << qty 
             << " Total: " << getTotal() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item it[n];
    float grand = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << endl;
        it[i].input();
        grand += it[i].getTotal();
    }

    cout << "\n--- BILL INVOICE ---\n";
    for (int i = 0; i < n; i++)
        it[i].display();

    cout << "\nGRAND TOTAL: " << grand << endl;

    return 0;
}
