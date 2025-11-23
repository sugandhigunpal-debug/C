 #include<iostream>
 using namespace std;
  
 class person {
    protected:
    string name;
    int age;
     
    public:
    void input(){
         cout<<"enter name ";
         cin>>name;
         cout<<"enter age";
        }
        void display(){
            cout<<"name"<<name<<"age"<< age<<endl;
        }
 };
 class student:public person {
    private:
    string course;
    public:
    void inputcourse(){
        cout<<"Enter course";
        cin>>course;
    }
    void displaystudent(){
          display();
        cout<<"course"<<course;
    
    }
 };
 int main(){
     student s1;
     s1.input ();
     s1.inputcourse();
     s1.displaystudent();
     return 0;
 }