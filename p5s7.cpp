 #include <iostream>
using namespace std;

template<typename T>
class Box {
    T value;
public:
    void set(T v) { value = v; }
    T get() { return value; }
};

int main() {
    string s; 
    cin >> s;

    Box<string> b;
    b.set(s);
    cout << b.get();
}