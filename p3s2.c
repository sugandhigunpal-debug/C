  #include <stdio.h>

int main() {
    int n, evenSum = 0, oddSum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);

    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            evenSum += *(arr + i);
        else
            oddSum += *(arr + i);
    }

    printf("Sum of Even = %d, Sum of Odd = %d\n", evenSum, oddSum);
    return 0;
}