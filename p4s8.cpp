 #include<iostream>
 #include<fstream>
 using namespace std;
   
 int main (){
    string linedded;
    string name;
    string line ;

    cout<<"Enter the file you want to open"<<endl;
    cin>>name;
    
    fstream fout(name,ios::in|ios::app);
    cout <<"Enter the text to append :"<<endl;
    
    
    
    while(linedded!="STOP"){
        cin>>linedded;
        if(linedded!="STOP"){
        fout<<linedded;}
    }
    
    while(getline(fout,line)){
        cout<<line<<endl;
     }
    cout<<"Data append successfully from myfile.txt:"<<endl;
     fout.close();
     return 0;
 }

 