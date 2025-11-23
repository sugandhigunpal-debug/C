 #include<iostream>
 using namespace std;
   
 class person {
     public:
     string name ;
     int age;
    };
 
     class Employee:public person {
        public: 
          int id;
        };
       class Manager:public Employee{
        public:
          int salary;
         void inputdetails (){
             cout<<"enter name ";
             cin>> name ;
             cout<< "enter age ";
             cin >> age;
             cout << " enter id";
             cin >> id;
             cout <<"enter salary";
             cin >> salary;
         }
     
     void outputdetails(){
        cout<<"  name"<<name<< " age"<<age<<"  id"<<"  salary"<< salary <<endl;
     }
    };
    int main (){
        Manager m;
        m.inputdetails();
        m.outputdetails();
        return 0;
    }
       
   
 