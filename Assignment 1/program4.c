// 5. Swap 2 variables using a 3rd variable

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Value of a: ");
    scanf("%d", &a);

    printf("\nValue of b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("\nValue of a is %d and value of b is %d.", a, b);

    return 0;
}
