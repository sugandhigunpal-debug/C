 #include <stdio.h>

int main() {
    int A[3][3][3];

    printf("Enter elements of 3x3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                scanf("%d", ((A + i) + j) + k);

    printf("3D Matrix:\n");
    for (int i = 0; i < 3; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                printf("%d ", ( (A + i) + j) + k);
            printf("\n");
        }
    }
    return 0;
}