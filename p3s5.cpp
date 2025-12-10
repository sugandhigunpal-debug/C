 #include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int id;
    string title, author;
    float price;

public:
    void input() {
        cout << "Enter BookID, Title, Author, Price: ";
        cin >> id >> title >> author >> price;
    }

    void display() const {
        cout << id << " " << title << " " << author << " " << price << endl;
    }

    string getAuthor() const { return author; }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book b[n];
    for (int i = 0; i < n; i++)
        b[i].input();

    string search;
    cout << "Enter author to search: ";
    cin >> search;

    cout << "\nBooks by " << search << ":\n";
    for (int i = 0; i < n; i++)
        if (b[i].getAuthor().find(search) != string::npos)
            b[i].display();
}
