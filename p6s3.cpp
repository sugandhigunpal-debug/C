#include <iostream>
using namespace std;

class FileHandler {
public:
    FileHandler() {
        cout << "Constructor: File opened\n";
    }
    ~FileHandler() {
        cout << "Destructor : File closed\n";
    }
    void doWork() {
        cout << "Working with the file (simulated)\n";
    }
};

int main() {
    cout << "Entering main scope\n";
    {
        FileHandler fh; 
        fh.doWork();
        cout << "About to leave inner block\n";
    } 

    cout << "Back in main after inner block\n";

    
    FileHandler fh2;
    fh2.doWork();

    cout << "End of main — fh2 will be destroyed now\n";
    return 0;
}