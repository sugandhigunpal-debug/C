 #include <iostream>
using namespace std;

class Matrix {
public:
    int a[2][2];

    void input() {
        cout << "Enter 4 elements:\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    Matrix add(Matrix &m) {
        Matrix result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result.a[i][j] = a[i][j] + m.a[i][j];
        return result;  // returning object by value
    }

    void display() {
        cout << "Matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2, sum;
    cout << "Enter first matrix:\n";
    m1.input();
    cout << "Enter second matrix:\n";
    m2.input();
    sum = m1.add(m2);
    cout << "Sum of matrices:\n";
    sum.display();
    return 0;
}