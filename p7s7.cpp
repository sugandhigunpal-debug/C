 #include<iostream>
 using namespace std;

 void CheckZero (int x){
    if(x==0)
   throw string ("Zero");
 }
 int main(){
   int x;
   cin>>x;
    
   try {
   CheckZero(x);
     cout<<"Ok";
   }
   catch(string s){
     cout<<"caught";
   }
   
}