 #include<iostream>
 using namespace std;
   
   class Employee{
    protected:
     int id;
     float salary;
     public:
     void Setdetails(){
        cout<<"enter id";
        cin>>id;
        cout<<"enter salary";
        cin>>salary;
     }
   };
   class Manager: public Employee{
    public:
    void displaydetails(){
        cout<<"enter manager id"<<id<<"enter salary"<<salary<<endl;
    }
   };
   int main (){
  Manager m;
  m.Setdetails();
  m.displaydetails();
  return 0;
   }