#include <stdio.h>
int reversearray(int *arr, int n) {
    int *ptr= &arr[n-1];
    printf("Accessing Reverse array elements using pointers :");
    printf("\n");
    for ( int i = 0; i <n; i++)
    { printf("%d",*ptr);
        ptr--;
    } 
    return 0;

}
 int main() {
    int arr[5]={1,2,3,4,5};
    int *ptr =arr;
    printf("Accessing Reverse array elements using pointers :");
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d",*ptr);
        ptr++;
        } 
    printf("\n");
  reversearray(arr,5);
   return 0;
    
 }
