#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int a;
    scanf("%d", &a);

    int* p = &a;

    printf("Square of %d is %d.\n", *p, *p**p);
    printf("Cube of %d is %d.\n", *p, *p**p**p);

    return 0;
}