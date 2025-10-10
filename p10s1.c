 #include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Pointer to array
    int (*p)[5] = &arr;
    printf("Using pointer to array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*p)[i]);
    }

    // Array of pointers
    int *ptr[5];
    for (int i = 0; i < 5; i++) {
        ptr[i] = &arr[i];
    }

    printf("\nUsing array of pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr[i]);
    }

    return 0;
}