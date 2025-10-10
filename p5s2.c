 #include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int A[n][n], T[n][n];

    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", (*(A + i) + j));

    printf("Transpose:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ((T + i) + j) = ((A + j) + i);
            printf("%d ", ((T + i) + j));
        }
        printf("\n");
    }
    return 0;
}