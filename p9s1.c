 #include <stdio.h>
 int main () {
    char *names [S] ={ "Tulip","Jasmine", "Rose","Eva","lotus"};
    
    printf("Names are :\n");
    for (int i = 0; i < 5; i++)
    {
     printf("%s\n", names[i]);

    }
    return 0;

 }