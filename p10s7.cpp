 #include <iostream>
#include <string>
using namespace std;

class NotTxtException {
public:
    string what() const { return "Not txt"; }
};

void checkTxt(const string& file) {
    if(file.size() < 4 || file.substr(file.size()-4) != ".txt")
        throw NotTxtException();
}

int main() {
    string file;
    cin >> file;

    try {
        checkTxt(file);
        cout << "OK";
    }
    catch(NotTxtException e) {
        cout << e.what();
    }
}
