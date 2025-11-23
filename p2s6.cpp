 #include<iostream>
 using namespace std;
  
 class Base{
    public:
    Base(){
        cout<<"Base Constructor Called";
     }
 ~Base(){
    cout<<" base destructor called";
 }
};
 class Derived: public Base{
     public:
Derived(){
        cout <<" base constructor called";
     }
  ~Derived(){
    cout<<" Base Destructor Called";
}
 };
 int main (){
    Derived obj;
 }
 