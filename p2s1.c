 #include <stdio.h>

// Call by value
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue: a=%d, b=%d\n", a, b);
}

// Call by reference
void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before swapValue: x=%d, y=%d\n", x, y);
    swapValue(x, y);
    printf("After swapValue: x=%d, y=%d\n", x, y);

    printf("\nBefore swapReference: x=%d, y=%d\n", x, y);
    swapReference(&x, &y);
    printf("After swapReference: x=%d, y=%d\n", x, y);

    return 0;
}