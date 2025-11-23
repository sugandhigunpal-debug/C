#include <iostream>
using namespace std;

template<typename T>
class MinMax {
    T minVal, maxVal;
public:
    MinMax(T a, T b) : minVal(a), maxVal(b) {}
    void print() {
        cout << minVal << " " << maxVal;
    }
};

int main() {
    string type;
    cin >> type;

    if(type == "int") {
        int a, b;
        cin >> a >> b;
        MinMax<int> obj(a, b);
        obj.print();
    }
    else {
        double a, b;
        cin >> a >> b;
        MinMax<double> obj(a, b);
        obj.print();
    }
}

