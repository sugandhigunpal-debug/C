 #include <iostream>
using namespace std;

template<typename T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    string type;
    int n;
    cin >> type >> n;

    if(type == "int") {
        int arr[100];   
        for(int i = 0; i < n; i++)
         cin >> arr[i];
        cout << sumArray(arr, n);
    }
    else {              
        double arr[100];
        for(int i = 0; i < n; i++)
         cin >> arr[i];
        cout << sumArray(arr, n);
    }

    return 0;
}