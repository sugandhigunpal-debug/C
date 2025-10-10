 #include <stdio.h>

int main() {
    char *students[5] = {"Alice", "Bob", "Charlie", "David", "Eve"};

    printf("Student Names:\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", *(students + i));

    return 0;
}