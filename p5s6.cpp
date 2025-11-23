 #include<iostream>
 using namespace std;

  class Shape {
    public:
    void area (){
  }  
};
class Rectangle: public Shape{
    public:
    int length;
    int breadth;
     
    void inputdetails(){
        cout<<"enter length";
        cin >>length;
        cout<<"enter breadth";
        cin>>breadth;
    }
    void area(){
        cout<<"area of rectange"<<(length*breadth);
    }
};
class Circle:public Shape {
    public:
    int radius;
    void inputdetails(){
        cout<<"enter radius:";
        cin >>radius;
    }
    void area(){
        cout<<"area of circle:"<<(3.14*radius*radius);
    }
};
int main(){
    Rectangle r;
    r.inputdetails();
    r.area();
     
    Circle c;
    c.inputdetails();
    c.area();
     
    return 0;
}