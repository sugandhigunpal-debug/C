 #include<iostream>
 using namespace std;

 template<typename T>
 void printTwo (Ta ,Tb){
    cout<< a <<" "<<b;
 }
 int main() {

    string type;
     cin >> type;

    if(type=="int"){
        int a,b;
        cin>>a>>b;
        printTwo(a,b);
      } 
   else if (type=="double")
    {
      double a,b;
      cin >> a>> b;
      printTwo(a,b);
    }
     else if(type=="string"){
        string a,b;
        cin>>a>>b;
        printTwo(a,b);
    }
      
 }