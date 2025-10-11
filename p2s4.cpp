 #include<iostream>
 using namespace std ;
  
 class reactangle{
    public:
    int length;
    int width;
    void Setdata(int l,int w){
        length=l;
        width=w;
    }
 };
 void scale(reactangle &r){

    r.length=2*r.length;
    r.width=2*r.width;
    cout<<"After change of length:"<<r.length<<"After change of breadth:"<<r.width<<endl;
 }
 int main(){
    reactangle r;
    r.Setdata(10,15);
    scale(r);
    return 0;
     

 }