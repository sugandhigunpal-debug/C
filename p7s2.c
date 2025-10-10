 #include <stdio.h>

int main() {
    int A[2][2][2], sum = 0;

    printf("Enter 8 elements of 2x2x2 array:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++) {
                scanf("%d", ( (A + i) + j) + k);
                sum += ( (A + i) + j)[k];
            }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}