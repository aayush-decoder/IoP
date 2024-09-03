// 16. program to read maximum number out of 3 numbers

#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a >= b) && (a >= c) ? a : (b >= c) ? b : c;

    printf("The maximum number is: %d\n", max);

    return 0;
}
