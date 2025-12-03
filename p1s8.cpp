#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main() {

    string filename;
    cout<<"Enter filename :";
    cin>>filename;

    ifstream fin(filename);
     if(!fin){
        cout<<"Error File cannot be opened"<<endl;
        return 0;
     }
    string line;
    while (getline(fin,line)) {
        cout<< line <<endl;
    }
     fin.close();
     return 0;
 }