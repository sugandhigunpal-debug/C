 #include <iostream>

using namespace std;

class Book {
public:
    char title[100];
    char author[50];
    double price;

    void input() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1, b2, b3;

    cout << "Enter details for Book 1:" << endl;
    b1.input();
    cout << "\nEnter details for Book 2:" << endl;
    b2.input();
    cout << "\nEnter details for Book 3:" << endl;
    b3.input();

    cout << "\nDisplaying Book Details:" << endl;
    cout << "\nBook 1:" << endl;
    b1.display();
    cout << "\nBook 2:" << endl;
    b2.display();
    cout << "\nBook 3:" << endl;
    b3.display();

    return 0;
}