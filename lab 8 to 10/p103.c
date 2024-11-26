#include <stdio.h>

#define isBig(x, y) (x > y)

int main() {

    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The biggest number of two is %d", isBig(num1, num2) ? num1 : num2);

    return 0;
}