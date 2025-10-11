 #include<iostream>
 using namespace std;

 class point 
 {
    public:
    int x ,y ;
    
    void Setdata(int a,int b){
        x=a;
        y=b;
    }
 };
 void display(point p){
    cout<<"coordinates is :"<<p.x<<"Coordinates is: "<<p.y<<endl;

 }
int main(){
   point A;
   A.Setdata(10,15);
   display(A);
   return 0;

    
}
 