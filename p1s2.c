  #include<stdio.h>

    void findmax(int *arr,int n,int *min,int *max ) {
         *min=*max=*arr;
        for(int i=1;i<n;i++) {
            if (*(arr+i)<*min)
            *min=*(arr+i) 
            if(*(arr+i)>*max)
            *max=*(arr+i)      
           } 
        }    
      
  int main() {
    int n;
    printf("enter number of  elements:");
    scanf("%d",&n);
     
    int arr[n],min,max;
    printf("enter number of elements:",n);
    for (int i = 0; i <n; i++)
     scanf("%d",&arr[n]);
    
     findmax(arr,n,&max,&min);
    printf("Maximum =%d,Minimum=%d",max,min);
    
    return 0;   
    
    
  }