 #include <iostream>
using namespace std;

template<typename T>
void scaleArray(T arr[], int n, T factor) {
    for(int i = 0; i < n; i++)
        arr[i] *= factor;
}

int main() {
    string type;
    int n;
    cin >> type >> n;

    if(type == "int") {
        int arr[100];        
        for(int i = 0; i < n; i++)
         cin >> arr[i];

        int f;
        cin >> f;

        scaleArray(arr, n, f);

        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    else { 
        double arr[100];
        for(int i = 0; i < n; i++) 
        cin >> arr[i];

        double f;
        cin >> f;

        scaleArray(arr, n, f);

        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    return 0;
}