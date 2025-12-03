 #include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream fin(filename);
    if (!fin) {
        cout << "Error opening file" << endl;
        return 0;
    }

    int chars = 0, words = 0, lines = 0;
    string word, line;

    while (getline(fin, line)) {
        lines++;
        chars += line.size();
        
        bool inside = false;
        for (char c : line) {
            if (!isspace(c)) {
                if (!inside) {
                    words++;
                    inside = true;
                }
            } else inside = false;
        }
    }

    cout <<"Characters:"<< chars << endl;
    cout <<"Words:"<< words << endl;
    cout <<"Lines:"<< lines << endl;

    fin.close();
    return 0;
}