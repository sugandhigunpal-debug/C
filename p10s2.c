 #include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr = (int)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
        sum += *(arr + i);
    }

    printf("Average = %.2f\n", (float)sum / n);
    free(arr);
    return 0;
}