
#include <stdio.h>

void increement(int*p) {
    *p++;
    }
    int main () {
     int num =5;
     
     printf("Before increement :%d\n",num);
     increement(&num);
     printf(" After increement : %d\n", num);
     return 0;

    }