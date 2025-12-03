#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string src, dest;
    cout << "Enter source file: ";
    cin >> src;
    cout << "Enter destination file: ";
    cin >> dest;

    ifstream fin(src);
    if (!fin) {
        cout <<"Source file cannot be opened" << endl;
        return 0;
    }

    ofstream fout(dest);
    char ch;

    while (fin.get(ch))
        fout.put(ch);

    cout << "Copy operation successful"<< endl;

    fin.close();
    fout.close();
    return 0;
}