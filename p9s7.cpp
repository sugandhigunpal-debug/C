 #include <iostream>
#include <vector>
using namespace std;

int main() {
    int cap, m;
    cin >> cap >> m;

    vector<int> st;

    while(m--) {
        string cmd;
        cin >> cmd;

        if(cmd == "push") {
            int x;
            cin >> x;
            if(st.size() == cap) {
                cout << "Full\n";
            } else {
                st.push_back(x);
            }
        }
        else { // pop
            if(st.empty()) {
                cout << "Empty\n";
            } else {
                cout << st.back() << "\n";
                st.pop_back();
            }
        }
    }
}
