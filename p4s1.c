# include <stdio.h>
   
   int sum(int*a,int*b) {
     return *a+*b;
} 
   int main () {
    int x=5, y=10;
    printf(" Sum : %d\n", sum(&x,&y));
    return 0;
    
   }