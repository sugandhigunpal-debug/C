 #include <iostream>
using namespace std;

class Account {
public:
    int balance;
    Account(int b) {
        balance = b;
    }

    void transfer(Account *acc, int amount) {
        if (balance >= amount) {
            balance -= amount;
            acc->balance += amount;
            cout << "Transfer successful!\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1(1000), a2(500);
    a1.transfer(&a2, 200);
    a1.showBalance();
    a2.showBalance();
    return 0;
}