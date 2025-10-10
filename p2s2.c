#include<stdio.h>
 
// call by value 
void swapvalue(inta,intb){
    int temp =a;
    a=b;
    b= temp;
    printf( inside swap value : a =%d\n,b=%d\n",a,b);
}
  // call by reference 
  void swap reference ( int *a,int*b){
    int temp = *a;
     *a=*b;
     *b=temp;
      }
  int main () {
    int a =5; b=10;
    printf("before swapvalue :a=%d,b=%d\n",a,b);
    swapvalue(a,b);
    printf("after swapvalue : a=%d,b=%d\n",a,b);
    printf("before swapreference : a=%d,b=%d\n",a,b);
    swapreference (&a,&b)
    printf("after swapreference : a=%d,b=%d",a,b); 
    return 0;
    }      
    