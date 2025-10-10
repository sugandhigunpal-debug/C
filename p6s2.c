 #include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    printf("Enter matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", (*(A + i) + j));

    for (int i = 0; i < m; i++) {
        int max = ((A + i));
        for (int j = 1; j < n; j++) {
            if (((A + i) + j) > max)
                max = ((A + i) + j);
        }
        printf("Row %d Max = %d\n", i + 1, max);
    }
    return 0;
}