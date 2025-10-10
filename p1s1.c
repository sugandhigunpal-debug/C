#include<stdio.h>

int main () {
    int a = 5;
    int b =10;
    int *A = &a;
    int *B = &b;
    printf(" value of a = %d\n ",a);
    printf(" value of b= %d\n",b);
    printf(" address of a =%d\n",&A);
    printf(" address of B =%d\n",&B) ;
    return 0;
    
}
